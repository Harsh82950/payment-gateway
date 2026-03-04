#include "PaymentProcessor.h"
#include "RetryManager.h"
#include "Logger.h"

bool PaymentProcessor::process(Transaction& txn, PaymentMethod& method) {

    Logger::info("Processing transaction: " + txn.getTransactionId());

    RetryManager retry;

    bool result = retry.executeWithRetry(method, txn.getAmount());

    if(result) {

        txn.setStatus(TransactionStatus::SUCCESS);
        Logger::success("Transaction completed");

    } else {

        txn.setStatus(TransactionStatus::FAILED);
        Logger::error("Transaction failed");

    }

    return result;
}