enable_testing()

find_package(Check REQUIRED)
include_directories(${CHECK_INCLUDE_DIRS})
set(LIBS ${LIBS} ${CHECK_LIBRARIES} calc)

include_directories(. ../src)
add_executable(check_calc check_calc.c)
add_test(check_calc ${CMAKE_CURRENT_BINARY_DIR}/check_calc)
target_link_libraries(check_calc ${LIBS})
