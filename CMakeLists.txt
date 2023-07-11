cmake_minimum_required(VERSION 3.25)
project(minimal_lit)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(srcs)

# generate lit.site.cfg
configure_file(lit.site.cfg.in lit.site.cfg @ONLY)

# add a target to run the test, build this test will trigger the run
add_custom_target(lit_test
    COMMAND lit ${CMAKE_CURRENT_BINARY_DIR} -v
    DEPENDS minimal_lit)

# add a CTest case to help integration
include(CTest)
add_test(run_lit_test "${CMAKE_COMMAND}" --build ${PROJECT_BINARY_DIR} --target lit_test)
