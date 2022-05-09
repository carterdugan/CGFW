# CGFW (WIP)
A simple library that creates an SFML game outline for you. I made this for myself, but decided it might be worth sharing.

# Building
To build the cgfw library, use the makefile
in the  main `CGFW/` directory. Each example
has a makefile in its directory, but the library
must be built first before these can be built.

# USAGE
Link with `-lcgfw` followed by your SFML libraries
and include the "CGFW.hpp" header file wherever
needed.  See `Examples/` folder for detailed
examples.

# Dependencies:
* SFML 2.5.1 or higher