#pragma once

#include "PaymentMethod.h"

class RetryManager {

private:
    int maxRetries;

public:

    RetryManager(int retries = 3);

    bool executeWithRetry(PaymentMethod& method, double amount);

};