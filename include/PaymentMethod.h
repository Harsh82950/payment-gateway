#pragma once
#include <iostream>

class PaymentMethod {
public:
    virtual bool processPayment(double amount) = 0;
    virtual ~PaymentMethod() = default;
};