cmake_minimum_required(VERSION 3.8)
project(Project_1)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES Project1.cpp Menu.cpp Control.cpp Character.cpp HighScores.cpp Encounters.cpp Trivia.cpp Trivia.h)
add_executable(Project_1 ${SOURCE_FILES})