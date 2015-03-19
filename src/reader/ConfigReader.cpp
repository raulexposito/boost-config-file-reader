#include "ConfigReader.h"

ConfigReader::ConfigReader(std::string file) {
	boost::property_tree::ini_parser::read_ini(file, pt);
}

std::string ConfigReader::getIp() {
	return getParameter(CONFIG_IP);
}

int ConfigReader::getPort() {
	return std::stoi(getParameter(CONFIG_PORT));
}

bool ConfigReader::isHTTPs() {
	return boost::iequals(getParameter(CONFIG_HTTPS), "true");
}

std::string ConfigReader::getParameter(std::string parameter) {
	return pt.get<std::string>(parameter);
}

