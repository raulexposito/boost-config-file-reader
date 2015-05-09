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

#include "reader/configreader.h"

#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE "'configreader.cpp' Unit Tests"

#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_CASE ( config_ini_with_parameters ) {

  std::string configFile = "../config/config.ini";
  ConfigReader configReader(configFile);
  BOOST_CHECK( configReader.getIp() == "127.0.0.1" );
  BOOST_CHECK( configReader.getPort() == 80 );
  BOOST_CHECK( configReader.isHTTPs() == false );
}

