#include "RetryManager.h"
#include "Logger.h"

RetryManager::RetryManager(int retries) {
    maxRetries = retries;
}

bool RetryManager::executeWithRetry(PaymentMethod& method, double amount) {

    int attempt = 0;

    while(attempt < maxRetries) {

        Logger::info("Attempt " + std::to_string(attempt + 1));

        if(method.processPayment(amount)) {
            return true;
        }

        attempt++;
        Logger::info("Retrying payment...");
    }

    return false;
}