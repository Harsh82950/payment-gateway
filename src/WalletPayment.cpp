#include "WalletPayment.h"
#include <iostream>

bool WalletPayment::processPayment(double amount) {

    std::cout << "Processing Wallet payment of "
              << amount << std::endl;

    return true;

}