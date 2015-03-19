#include <iostream>
#include "ConfigReader.h"

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
