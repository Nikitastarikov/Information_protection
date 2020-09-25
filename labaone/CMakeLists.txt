cmake_minimum_required(VERSION 3.16 FATAL_ERROR)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

project(LabaOne VERSION 1.0)

#option(USE_MYMATH "Use tutorial provided math implemetation" ON)

#configure_file(SimpleConfig.h.in SimpleConfig.h)

add_subdirectory(LibCryptographic)

add_executable(TestLabaOne Tests/TestLabaOne.cpp)
add_executable(LabaOne LabaOne.cpp)

target_link_libraries(LabaOne PUBLIC LibCryptographic)
target_link_libraries(TestLabaOne PUBLIC LibCryptographic)

target_include_directories(LabaOne PUBLIC
	"${PROJECT_BINARY_DIR}"
	"${PROJECT_SOURCE_DIR}/LibCryptographic"
)

target_include_directories(TestLabaOne PUBLIC
	"${PROJECT_BINARY_DIR}"
	"${PROJECT_SOURCE_DIR}/LibCryptographic"
)