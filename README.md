# Payment Gateway System (C++)

## Overview

This project is a simplified backend simulation of a **payment gateway system** implemented in C++.
It demonstrates how payment processing systems handle transactions, retry mechanisms, and multiple payment strategies using object-oriented design.

The system supports different payment methods such as **UPI, Card, and Wallet**, processes transactions with automatic retries on failure, and logs all operations.

---

## Features

* Multiple payment methods (UPI, Card, Wallet)
* Transaction creation and tracking
* Automatic retry mechanism for failed payments
* Transaction ID generation
* Structured logging system
* Modular and extensible architecture

---

## Architecture
                +---------------------+
                |  TransactionIdGen   |
                +----------+----------+
                           |
                           v
                    +-------------+
                    | Transaction |
                    +------+------+ 
                           |
                           v
                   +--------------+
                   | PaymentProcessor |
                   +-------+------+
                           |
                           v
                     +-----------+
                     | RetryManager |
                     +------+----+
                            |
                            v
                     +-------------+
                     | PaymentMethod |
                     +------+------+ 
                        /     |     \
                       v      v      v
                  UpiPayment CardPayment WalletPayment
                            |
                            v
                         Logger

## Design Principles Used

### Strategy Pattern

Different payment methods implement a common interface (`PaymentMethod`), allowing new payment methods to be added without modifying the core processor.

### Single Responsibility Principle

Each class has a clear responsibility:

* **Transaction** → stores transaction details
* **PaymentProcessor** → manages payment execution
* **RetryManager** → handles retry logic
* **Logger** → manages system logs

### Open-Closed Principle

New payment methods can be added without modifying existing code.

---

## Project Structure

```
payment-gateway/
│
├── src/
│   ├── main.cpp
│   ├── PaymentProcessor.cpp
│   ├── RetryManager.cpp
│   ├── Transaction.cpp
│   ├── TransactionIdGenerator.cpp
│   ├── Logger.cpp
│   ├── UpiPayment.cpp
│   ├── CardPayment.cpp
│   └── WalletPayment.cpp
│
├── include/
│   ├── PaymentProcessor.h
│   ├── RetryManager.h
│   ├── Transaction.h
│   ├── TransactionIdGenerator.h
│   ├── Logger.h
│   ├── PaymentMethod.h
│   ├── UpiPayment.h
│   ├── CardPayment.h
│   └── WalletPayment.h
│
├── tests/
├── docs/
├── Makefile
└── README.md
```

---

## How to Run

Compile the project:

```
g++ src/*.cpp -Iinclude -o payment
```

Run the executable:

```
payment
```

---

## Example Output

```
[INFO] Processing transaction: TXN1
[INFO] Attempt 1
Processing UPI payment of 500
[SUCCESS] Transaction completed
```

---

## Possible Improvements

* Add database persistence for transactions
* Implement asynchronous payment processing
* Introduce fraud detection module
* Add REST API layer for real-world usage
* Support distributed payment processing

---

## Technologies Used

* C++
* Object-Oriented Programming
* Design Patterns
* Modular System Design

## Future Improvements
Possible enhancements:

• Add database storage for transactions
• Implement fraud detection module
• Add asynchronous payment processing
• Create REST API interface
• Support distributed payment services
