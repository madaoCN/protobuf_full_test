//
// Created by 梁宪松 on 2020-07-10.
//

#include <iostream>
#include <gtest/gtest.h>
#include "integer_tests.hpp"
#include "float_tests.hpp"
#include "string_tests.hpp"
#include "list_tests.hpp"
#include "object_tests.hpp"

int main(int argc, char ** argv) {

    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();  // 执行所有的 test case
}
