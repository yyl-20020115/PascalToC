cmake_minimum_required(VERSION 3.10)
 
project(PTOC VERSION 1.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_GENERATOR_PLATFORM Win32)

add_definitions(-D_CRT_SECURE_NO_WARNINGS)

include_directories(. ./WinBGI)

set(SRC_FILES 
    main.h
    token.h
    token.dpp 
    nmtbl.h 
    bring.h 
    tpexpr.h 
    trnod.h 
    util.h 
    parser.h
    trnod.cxx 
    nmtbl.cxx 
    bring.cxx 
    tpexpr.cxx 
    util.cxx 
    parser.cxx 
    lex.cxx 
    token.cxx 
    dprintf.cxx
    main.cxx
 )

add_subdirectory(WinBGI)

add_executable(PTOC ${SRC_FILES})

add_executable(CGANAL
    main.h
    analyse.cxx
)


target_link_libraries(PTOC PRIVATE WinBGI)

