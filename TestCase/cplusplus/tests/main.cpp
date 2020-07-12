//
// Created by 梁宪松 on 2020-07-10.
//

#include <iostream>
#include <gtest/gtest.h>
#include "integer_tests.cpp"
#include "float_tests.cpp"

int main(int argc, char ** argv) {

    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();  // 执行所有的 test case
}
