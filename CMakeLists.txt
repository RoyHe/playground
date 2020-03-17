cmake_minimum_required(VERSION 3.15)
project(PlayGround)

set(CMAKE_CXX_STANDARD 14)

add_executable(PlayGround main.cpp BasePredictor.cpp BasePredictor.h PredictorA.cpp PredictorA.h PredictorB.cpp PredictorB.h)