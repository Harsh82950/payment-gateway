#pragma once

#include "PaymentMethod.h"

class WalletPayment : public PaymentMethod {

public:

    bool processPayment(double amount) override;

};