#pragma once
#include <string>

class TransactionIdGenerator {

private:
    static int counter;

public:
    static std::string generate();
};