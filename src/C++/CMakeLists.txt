cmake_minimum_required( VERSION 3.22.4)
project( Engineering )

add_subdirectory( Mathematics Physics )

add_executable( ${PROJECT_NAME} main.cpp )

