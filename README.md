The purpose of this project is to show how to read a config file with boost from scratch.

# Environment:

Ubuntu 14.04

# Requirements:

* `boost`
* `cmake`
* `gcc`

````
$ sudo apt-get install build-essential cmake libboost-all-dev -y
````

# First steps:

1. Create a directory named `build/`
2. Execute `cmake ..` on it and some files and directories will be created.
3. Execute `make` to create the executable (named `reader`)
4. Execute it: `./reader ../config/config.ini`.