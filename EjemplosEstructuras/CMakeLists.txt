cmake_minimum_required(VERSION 4.0)
project(Estructuras C)

set(CMAKE_C_STANDARD 23)

add_executable(Estructuras main.c
        cosasDePersonas.c
        cosasDePersonas.h
        domino.c
        domino.h
        Cartas.c
        Cartas.h)
