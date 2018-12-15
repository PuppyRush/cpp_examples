cmake_minimum_required(VERSION 3.12)
project(cpp_examples)

set(CMAKE_CXX_STANDARD 17)

add_executable(cpp_examples main.cpp Common/headers.h Common/widget.h pointer/smater_pointer.h ctor_dtor/ctor.h inherance/inherance.h ptr_ary_ref/reference.h stl/vector.h)