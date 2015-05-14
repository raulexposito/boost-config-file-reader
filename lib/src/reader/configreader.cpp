/**
 * DO WHAT THE FUCK YOU WANT TO PUBLIC LICENSE
 * Version 2, December 2004
 *
 * Copyright (C) 2004 Sam Hocevar <sam@hocevar.net>
 *
 * Everyone is permitted to copy and distribute verbatim or modified copies of
 * this license document, and changing it is allowed as long as the name is
 * changed.
 *
 * DO WHAT THE FUCK YOU WANT TO PUBLIC LICENSE
 * TERMS AND CONDITIONS FOR COPYING, DISTRIBUTION AND MODIFICATION
 *
 * 0. You just DO WHAT THE FUCK YOU WANT TO.
 */

#include "configreader.h"

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
