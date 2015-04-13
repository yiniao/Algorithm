cmake_minimum_required(VERSION 3.1)
project(Algorithm)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)

add_executable(Algorithm ${SOURCE_FILES} IntSLLNode.cpp IntSLLNode.h DLLNode.cpp DLLNode.h Base.h Pointor.h Ref.h FunPoint.h std/VectorTest.h)