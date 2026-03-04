#pragma once
#include <string>

enum class TransactionStatus {
    INITIATED,
    SUCCESS,
    FAILED
};

class Transaction {

private:
    std::string transactionId;
    double amount;
    TransactionStatus status;

public:

    Transaction(std::string id, double amt);

    void setStatus(TransactionStatus newStatus);

    std::string getTransactionId() const;

    TransactionStatus getStatus() const;

    double getAmount() const;   // NEW FUNCTION
};