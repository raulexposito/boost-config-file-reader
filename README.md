The purpose of this project is to show how to read a config file with boost
from scratch.

Google Test 1.7 and Google Mock 1.7 will be used:
https://code.google.com/p/googletest/
https://code.google.com/p/googlemock/

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

# First steps:

1. Create a directory named `build/`.
2. Execute `cmake ..` on it and some files and directories will be created.
3. Execute `make` to create the executable (named
`boost-config-file-reader-main` and placed under `main`). Google Test and
Google Mock will be downloaded and compiled.
4. Execute it: `./main/boost-config-file-reader-main ../config/config.ini`.
5. Execute `make test` to run the tests from make.
6. Execute `./lib/test/reader/filereader-test` to run the tests from Google
Test.
