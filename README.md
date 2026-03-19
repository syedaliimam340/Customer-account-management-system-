# Customer-account-management-system-
Customer account management system  Description

🏦 Customer Account Management System (C++)
A simple and beginner-friendly Customer Account Management System built using C++ and Object-Oriented Programming (OOP) concepts.

📌 Overview
This project allows users to manage customer bank accounts efficiently.
Users can create accounts, deposit and withdraw money, and check balances.

It is designed to demonstrate how real-world systems can be built using basic C++ concepts.

✨ Features
👤 Create multiple customer accounts
💰 Deposit money into an account
💸 Withdraw money from an account
📊 Check account balance
📋 Display all customer details
🔢 Track total number of accounts

🧠 Concepts Used
🧱 Classes & Objects
📌 Static Variables & Functions
📦 Arrays of Objects
🔁 Loops (for, do-while)
✅ Input Validation
⚙️ Functions

🏗️ Class Structure
🔹 Class: Bdetails

📥 Data Members
name → stores customer name
intial_ammount → stores account balance
static int count → tracks total accounts

⚙️ Member Functions
getdata() → takes input and validates minimum deposit (>500)
showdata() → displays customer details
Deposit(int amount) → adds money
withdrawal(int amount) → deducts money
Check() → shows balance
total() → displays total accounts

🔄 How It Works
User enters number of accounts
Program stores data in object array
Displays all customer details

Menu options:
1️⃣ Withdrawal
2️⃣ Deposit
3️⃣ Check Balance

User selects option and enters account number
Requested operation is performed

🛡️ Input Validation
✔️ Uses do-while loops
✔️ Prevents invalid input
✔️ Ensures amount is positive
✔️ Minimum deposit must be greater than 500

🚀 Advantages
✔️ Easy to understand for beginners
✔️ Strong implementation of OOP concepts
✔️ Handles multiple customers efficiently
✔️ Reliable due to input validation
✔️ Modular and reusable code

✔️ Automatically tracks total accounts

✔️ Simple and user-friendly interface
