#include <iostream>
#include <stdio.h>
#include <ctime>
#include "src/proto_models/testModel.pb.h"
#include "src/proto_models/testModel.pb.cc"

int main() {

    clock_t tick = clock();

    std::cout << "Hello, World!" << std::endl;

    std::cout << "s" <<  std::endl;
    printf("clock: %f s", (double)(clock() - tick) / CLOCKS_PER_SEC);

    testModel::Int64Model model;
//    testModel::TenInt64Model model1;
    return 0;
}