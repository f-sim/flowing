cmake_minimum_required(VERSION 3.9)
project(flowing)

set(CMAKE_CXX_STANDARD 17)

enable_testing()
find_package(GTest REQUIRED)

add_executable(foo foo.cpp foo.cpp)
target_link_libraries(foo GTest::GTest GTest::Main)

target_compile_options(foo PRIVATE -fprofile-arcs -ftest-coverage)

add_test(AllTestsInFoo foo)