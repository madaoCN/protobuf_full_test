//
// Created by 梁宪松 on 2020-07-10.
//

#include <gtest/gtest.h>
using namespace std;

class integerTests: public ::testing::Test {
public:
    
};

int Add(int a, int b) {
    return a+b;
}

TEST(testCase, test0){
    EXPECT_EQ(14, Add(4, 10));
}
