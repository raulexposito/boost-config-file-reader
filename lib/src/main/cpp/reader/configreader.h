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
