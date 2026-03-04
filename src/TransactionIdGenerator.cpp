#include "TransactionIdGenerator.h"

int TransactionIdGenerator::counter = 1;

std::string TransactionIdGenerator::generate() {

    std::string id = "TXN" + std::to_string(counter);
    counter++;

    return id;
}