cmake_minimum_required(VERSION 3.2)
project(awesome-c-c++)
set (awesome-c-c++_VERSION_MAJOR 0)
set (awesome-c-c++_VERSION_MINOR 1)

set(CMAKE_CXX_FLAG "-g -Wall")

set(SOURCES
	src/m_atoi_method.cpp
  )

add_executable(awesome ${SOURCES})


# call "C:\Program Files (x86)\Microsoft Visual Studio 12.0\VC\bin\vcvars32.bat"
