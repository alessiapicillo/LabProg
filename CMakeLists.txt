cmake_minimum_required(VERSION 3.25)
project(LabProg)

set(CMAKE_CXX_STANDARD 17)

add_executable(LabProg main.cpp User.cpp User.h Message.cpp Message.h Chat.cpp Chat.h)
