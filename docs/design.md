# Payment Gateway System – Design Documentation

## System Overview

This project simulates a simplified backend **Payment Gateway System** implemented in C++.  
It demonstrates transaction processing, retry logic, and support for multiple payment strategies.

The system follows a modular architecture with clear separation of responsibilities.

---

## System Architecture

```
main
 ↓
TransactionIdGenerator
 ↓
Transaction
 ↓
PaymentProcessor
 ↓
RetryManager
 ↓
PaymentMethod (Strategy Pattern)
 ↓
Logger
```

---

## Core Components

### 1. Transaction
Represents a payment transaction.

Attributes:
- transactionId
- amount
- status

Responsibilities:
- Store transaction information
- Track transaction lifecycle

---

### 2. PaymentProcessor
Main orchestrator of the payment flow.

Responsibilities:
- Coordinate transaction processing
- Use RetryManager to handle failures
- Update transaction status

---

### 3. RetryManager
Handles retry logic for failed transactions.

Features:
- configurable retry attempts
- automatic retry on failure

Example:

Attempt 1 → Failed  
Attempt 2 → Retry  
Attempt 3 → Success

---

### 4. PaymentMethod (Strategy Pattern)

Abstract interface implemented by multiple payment methods.

Supported implementations:
- UpiPayment
- CardPayment
- WalletPayment

This allows easy addition of new payment methods without modifying existing code.

---

### 5. TransactionIdGenerator

Generates unique transaction IDs automatically.

Example:
TXN1  
TXN2  
TXN3  

---

### 6. Logger

Provides structured logging for the system.

Example logs:

[INFO] Processing transaction  
[SUCCESS] Transaction completed  
[ERROR] Transaction failed  

---

## Design Principles Used

### Strategy Pattern
Used to support multiple payment methods.

### Single Responsibility Principle
Each class handles a single responsibility.

### Open-Closed Principle
New payment methods can be added without modifying existing logic.

---

## Future Improvements

Possible extensions include:

- Database persistence for transactions
- Fraud detection module
- REST API interface
- Distributed payment processing