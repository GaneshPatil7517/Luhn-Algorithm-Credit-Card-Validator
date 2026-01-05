# Luhn-Algorithm-Credit-Card-Validator
A simple C++ program that validates credit and debit card numbers using the Luhn Algorithm. It supports inputs with spaces or hyphens, removes non-digit characters, and checks the card’s checksum to determine validity. Useful for beginners learning string processing, validation logic, and algorithms in C++. Includes clean, readable code.

Credit Card Validator – Luhn Algorithm (C++)

This project implements a Credit/Debit Card Validator using the Luhn Algorithm, widely used for validating card numbers such as:
Visa
MasterCard
RuPay
American Express
Discover
IMEI numbers
Many UPI virtual card numbers

🚀 Features
✔ Accepts card numbers with or without spaces
✔ Supports hyphen-separated input (example: 1234-5678-9012-3456)
✔ Automatically removes spaces & hyphens
✔ Rejects invalid characters
✔ Implements full Luhn checksum
✔ Easy-to-understand code with comments

📌 How the Luhn Algorithm Works
Start from the rightmost digit
Double every second digit
If doubling > 9 → subtract 9
Sum all digits
If sum % 10 == 0 → card is valid

Example Input
4539 1488 0343 6467

Output
Valid card number ✅

Webinterface Comming Soon......

Example Invalid Input
1234 5678 9999

Output
Invalid card number ❌
