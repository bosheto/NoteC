cmake_minimum_required(VERSION 3.28)
project(TODO_List C)

set(CMAKE_C_STANDARD 11)

add_executable(TODO_List main.c
        app-note.h
        app-note.c
        app-command-engine.h
        command-engine.c)
