cmake_minimum_required(VERSION 3.15)
project(untitled)

set(CMAKE_CXX_STANDARD 11)

add_executable(untitled main.cpp Deck.cpp Deck.h PazaakLogic.cpp PazaakLogic.h Player.cpp Player.h HumanPlayer.cpp HumanPlayer.h ComputerPlayer.cpp ComputerPlayer.h)