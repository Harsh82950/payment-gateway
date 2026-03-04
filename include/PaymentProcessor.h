#pragma once

#include "PaymentMethod.h"
#include "Transaction.h"

class PaymentProcessor {

public:

    bool process(Transaction& txn, PaymentMethod& method);

};