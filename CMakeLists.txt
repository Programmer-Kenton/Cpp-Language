cmake_minimum_required(VERSION 3.27.8)
project(09shenlan)

set(CMAKE_CXX_STANDARD 17)

add_executable(09shenlan main.cpp
        chapter07-func/test/testFunc.cpp
        chapter07-func/head/head.h
        chapter07-func/test/testReload.cpp
        chapter07-func/test/testInline.cpp
        chapter07-func/head/inlineHead.h
        chapter07-func/test/testFuncPoint.cpp
        chapter08-IO/test/testIO.cpp
        chapter09-dynamicMemory/test/testDynamic.cpp
        chapter09-dynamicMemory/source/Animal.cpp
        chapter09-dynamicMemory/head/Animal.h
        chapter08-IO/test/testEncipher.cpp
)

add_executable(
        testMainArray chapter04-Array/test/testMainArray.cpp
)

add_executable(
        testType chapter03-Type/test/testType.cpp
)

add_executable(
        testVector chapter04-Array/test/testVector.cpp
)

add_executable(
        testString chapter04-Array/test/testString.cpp
)

add_executable(
        testInvert chapter05-invert/test/testInvert.cpp
)

add_executable(
        testStatement chapter06-statement/test/testStatement.cpp
)

add_executable(
        testRadiusFor chapter06-statement/test/testRadiusFor.cpp
)

add_executable(
        testDemo chapter06-statement/test/testDemo.cpp
)

add_executable(
        testFunc chapter07-func/test/testFunc.cpp
        chapter07-func/head/head.h
)

add_executable(
        testReload chapter07-func/test/testReload.cpp
)

add_executable(
        testInline chapter07-func/test/testInline.cpp
        chapter07-func/head/inlineHead.h
)

add_executable(
        testFuncPoint chapter07-func/test/testFuncPoint.cpp
)

add_executable(
        testIO chapter08-IO/test/testIO.cpp
)

add_executable(
        testDynamic chapter09-dynamicMemory/test/testDynamic.cpp
        chapter09-dynamicMemory/head/Animal.h
        chapter09-dynamicMemory/source/Animal.cpp
)

add_executable(
        testEncipher chapter08-IO/test/testEncipher.cpp
)

add_executable(
        testVector02 chapter10-container/test/testVector02.cpp
)