//
// Created by 梁宪松 on 2020-07-10.
//

#include <gtest/gtest.h>

int SUB(int a, int b) {
    return a+b;
}

TEST(testCase2, test0){

EXPECT_EQ(14, SUB(4, 10));
}
