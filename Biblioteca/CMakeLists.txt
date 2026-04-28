cmake_minimum_required(VERSION 4.0)
project(ABCCArchivosBinarios C)

set(CMAKE_C_STANDARD 23)

add_executable(ABCCArchivosBinarios main.c
        biblioteca.c
        biblioteca.h)
