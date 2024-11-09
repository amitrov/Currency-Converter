# Minimum version of CMake required
cmake_minimum_required(VERSION 3.10)

# Project name and language
project(CurrencyConverter C)

# Set the C standard to C99 for compatibility
set(CMAKE_C_STANDARD 99)

# Specify the GCC compiler explicitly if necessary
set(CMAKE_C_COMPILER /usr/bin/gcc)

# Add the executable target
add_executable(currency_converter currency_converter.c)
