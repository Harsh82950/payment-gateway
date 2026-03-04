#pragma once
#include "PaymentMethod.h"

class UpiPayment : public PaymentMethod {
public:
    bool processPayment(double amount) override;
};