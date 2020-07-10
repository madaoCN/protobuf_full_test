//
// Created by 梁宪松 on 2020-07-10.
//

#ifndef CPLUSPLUS_INT64MODEL_H
#define CPLUSPLUS_INT64MODEL_H

class Int64Model {

    int64_t int64Value;

public:
    int64_t getInt64Value() const {
        return int64Value;
    }

    void setInt64Value(int64_t int64Value) {
        Int64Model::int64Value = int64Value;
    }
};

#endif //CPLUSPLUS_INT64MODEL_H
