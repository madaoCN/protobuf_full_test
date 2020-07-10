//
// Created by 梁宪松 on 2020-07-10.
//

#include <gtest/gtest.h>
using namespace std;

class integer_tests: public ::testing::Test {


};

int Add(int a, int b) {
    return a+b;
}

TEST(testCase, test0){
    EXPECT_EQ(14, Add(4, 10));
}

//TEST(testCase, test1){
//    ASSERT_EQ(6, Add(5, 7));
//}

TEST(testCase, test2){
//    EXPECT_EQ(28, Add(8, 10)) << "bugs";
}