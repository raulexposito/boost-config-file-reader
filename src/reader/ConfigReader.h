#ifndef READER_CONFIGREADER_H_
#define READER_CONFIGREADER_H_

#include <iostream>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/ini_parser.hpp>
#include <boost/algorithm/string.hpp>


class ConfigReader {
public:
	ConfigReader (std::string file);
	std::string getIp();
	int getPort();
	bool isHTTPs();

protected:
	const std::string CONFIG_IP = "ip";
	const std::string CONFIG_PORT = "port";
	const std::string CONFIG_HTTPS = "https";

private:
	boost::property_tree::ptree pt;
	std::string getParameter(std::string parameter);	
};

#endif /* READER_CONFIGREADER_H_ */
