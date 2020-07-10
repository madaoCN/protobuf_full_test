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

//TEST(testCase2, test1){
//ASSERT_EQ(6, SUB(5, 7));
//}

TEST(testCase2, test2){
//EXPECT_EQ(28, SUB(8, 10)) << "bugs";
}