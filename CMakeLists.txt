cmake_minimum_required(VERSION 3.22)
project(WP6)

set(CMAKE_CXX_STANDARD 14)

add_executable(WP6 main.cpp Individual.cpp Individual.h Mutator.h Mutator.h BitFlip.cpp BitFlip.h BitFlipProb.cpp BitFlipProb.h Rearrange.cpp Rearrange.h)
