#include "UpiPayment.h"
#include <iostream>

bool UpiPayment::processPayment(double amount) {
    std::cout << "Processing UPI payment of " << amount << std::endl;
    return true;
}