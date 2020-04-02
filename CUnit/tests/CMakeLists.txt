enable_testing()

find_package(Check REQUIRED)
include_directories(${CHECK_INCLUDE_DIRS})
find_package(CUnit REQUIRED)
include_directories(${CUNIT_INCLUDE_DIRS})

set(LIBS ${LIBS} ${CHECK_LIBRARIES} ${CUNIT_LIBRARIES} calc)

include_directories(. ../src)
add_executable(cunit_calc cunit_calc.c)
add_test(cunit_calc ${CMAKE_CURRENT_BINARY_DIR}/cunit_calc)
target_link_libraries(cunit_calc ${LIBS})
