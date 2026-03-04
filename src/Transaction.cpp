#include "Transaction.h"

Transaction::Transaction(std::string id, double amt) {
    transactionId = id;
    amount = amt;
    status = TransactionStatus::INITIATED;
}

void Transaction::setStatus(TransactionStatus newStatus) {
    status = newStatus;
}

std::string Transaction::getTransactionId() const {
    return transactionId;
}

TransactionStatus Transaction::getStatus() const {
    return status;
}

double Transaction::getAmount() const {   // NEW FUNCTION
    return amount;
}