#include "CardPayment.h"
#include <iostream>

bool CardPayment::processPayment(double amount) {

    std::cout << "Processing Card payment of "
              << amount << std::endl;

    return true;

}