cmake_minimum_required(VERSION 2.8) 								
project(hello_world)				
include_directories(${INCLUDE_PATH})	
set(SOURCE md_main.cpp mdObjectsList.cpp mdObjectsList.h)			
add_executable(main ${SOURCE})	
