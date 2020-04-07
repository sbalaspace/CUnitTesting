enable_testing()

find_package(CMocka REQUIRED)
include_directories(${CMOCKA_INCLUDE_DIRS})

set(LIBS ${LIBS} ${CMOCKA_LIBRARIES} calc)

include_directories(. ../src)
add_executable(cmocka_calc cmocka_calc.c)
add_test(cunit_calc ${CMAKE_CURRENT_BINARY_DIR}/cmocka_calc)
target_link_libraries(cmocka_calc ${LIBS})
