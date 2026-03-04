#include "PaymentProcessor.h"
#include "UpiPayment.h"
#include "CardPayment.h"
#include "WalletPayment.h"
#include "Transaction.h"
#include "TransactionIdGenerator.h"

int main() {

    PaymentProcessor processor;

    Transaction txn1(TransactionIdGenerator::generate(), 500);
    UpiPayment upi;
    processor.process(txn1, upi);

    Transaction txn2(TransactionIdGenerator::generate(), 300);
    CardPayment card;
    processor.process(txn2, card);

    Transaction txn3(TransactionIdGenerator::generate(), 200);
    WalletPayment wallet;
    processor.process(txn3, wallet);

    return 0;
}