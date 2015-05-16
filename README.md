The purpose of this project is to show how to read a config file with boost
from scratch.

* http://www.boost.org/

Also, Google Test 1.7 and Google Mock 1.7 will be used:

* https://code.google.com/p/googletest/
* https://code.google.com/p/googlemock/

# Environment:

Ubuntu 14.04

# Requirements:

* `boost`
* `cmake`
* `gcc`

You can install them with this command:

````
$ sudo apt-get install build-essential cmake libboost-all-dev -y
````

# First Steps:

1. Create a directory named `build/`.
2. Execute `cmake ..` on it and some files and directories will be created.

# Execution:

1. Execute `make` to create the executable. Google Test and
Google Mock will be downloaded and compiled.
2. Run it: `./app/src/main/cpp/boost-config-file-reader-app
../lib/src/main/resources/config.ini`.

# Tests:

1. Execute `make test` to run the tests from make.
2. Execute `./lib/src/test/cpp/reader/configreader-test` to run the tests from
Google Test.

# References:

* https://www.johnlamp.net/cmake-tutorial-1-getting-started.html
* https://github.com/kaizouman/gtest-cmake-example

Thanks for sharing guys!

