cmake_minimum_required(VERSION 2.8) 								
project(hello_world)				
set(INCLUDE_PATH "D:/project_cpp/Static Site Generator/src/include/Marcdown")
include_directories(${INCLUDE_PATH})	

set(SOURCE md_main.cpp mdObjectsList.cpp ${INCLUDE_PATH}/mdObjectsList.h)			
		

add_executable(main ${SOURCE})	