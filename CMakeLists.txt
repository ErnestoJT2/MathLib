cmake_minimum_required(VERSION 3.30)
project(unit_test)

set(CMAKE_CXX_STANDARD 17)

# Fuentes principales
set(SOURCES
    main.cpp
    MyMathLib.h
    BasicMath.h
    AdvancedMath.h
)

add_executable(unit_test ${SOURCES})

# Opciones
option(ENABLE_TESTING "Enable a Unit Testing build." ON)

# Descarga GoogleTest
include(FetchContent)
FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG release-1.11.0
)
FetchContent_MakeAvailable(googletest)

# Si se habilitan las pruebas
if(ENABLE_TESTING)
    enable_testing()

    # Pruebas unitarias
    add_executable(test_suite test.cpp)

    # Enlazar GoogleTest
    target_link_libraries(test_suite PRIVATE gtest gtest_main)

    # Registrar pruebas
    add_test(NAME AllTests COMMAND test_suite)
endif()