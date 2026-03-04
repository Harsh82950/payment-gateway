#pragma once

#include "PaymentMethod.h"

class CardPayment : public PaymentMethod {

public:

    bool processPayment(double amount) override;

};