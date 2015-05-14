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

#include <iostream>
#include "reader/configreader.h"

int main(int argc, char** argv) {

	if (argc != 2) {
		std::cout << std::endl << "Usage: reader <file>" << std::endl;
		return -1;
	}

	std::string filename(argv[1]);

	ConfigReader configReader(filename);

	std::cout << "    ip: " << configReader.getIp() << std::endl;
	std::cout << "  port: " << configReader.getPort() << std::endl;
	std::cout << " https: " << std::boolalpha << configReader.isHTTPs()
		<< std::noboolalpha << std::endl;

	return 0;
}
