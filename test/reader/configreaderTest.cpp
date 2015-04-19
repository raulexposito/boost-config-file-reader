/**
 * DO WHAT THE FUCK YOU WANT TO PUBLIC LICENSE
 * Version 2, December 2004
 * 
 * Copyright (C) 2004 Sam Hocevar <sam@hocevar.net>
 * 
 * Everyone is permitted to copy and distribute verbatim or modified copies of this license document, and changing it is allowed as long as the name is changed.
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


BOOST_AUTO_TEST_CASE ( nonexistant_file ) {

  std::string pollas = "hola";

   ConfigReader configReader(pollas);

  BOOST_CHECK( pollas == "hola" );

}

/*
BOOST_AUTO_TEST_CASE( my_test )
{
  // seven ways to detect and report the same error:
  BOOST_CHECK( add( 2,2 ) == 4 );        // #1 continues on error
  BOOST_REQUIRE( add( 2,2 ) == 4 );      // #2 throws on error

  if( add( 2,2 ) != 3 )
     BOOST_ERROR( "Ouch..." );            // #3 continues on error

  if( add( 2,2 ) != 4 )
    BOOST_FAIL( "Ouch..." );             // #4 throws on error

  if( add( 2,2 ) != 4 ) throw "Ouch..."; // #5 throws on error

  BOOST_CHECK_MESSAGE( add( 2,2 ) == 3,  // #6 continues on error
    "add(..) result: " << add( 2,2 ) );
  BOOST_CHECK_EQUAL( add( 2,2 ), 4 );      // #7 continues on error
}
*/


