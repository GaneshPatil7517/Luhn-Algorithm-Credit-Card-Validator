#include <iostream>
#include <string>
using namespace std;

// ---------------------- LUHN ALGORITHM FUNCTION ----------------------
bool luhnCheck(const string &card) {
    int sum = 0;
    bool doubleDigit = false;

    // Traverse digits from RIGHT to LEFT
    for (int i = card.size() - 1; i >= 0; --i) {
        int d = card[i] - '0';

        if (doubleDigit) {
            d *= 2;
            if (d > 9)
                d -= 9;
        }

        sum += d;
        doubleDigit = !doubleDigit;
    }

    // Valid if divisible by 10
    return (sum % 10 == 0);
}

// ---------------------- MAIN FUNCTION ----------------------
int main() {
    string card;
    cout << "Enter card number: ";
    getline(cin, card);

    string clean = "";

    // Clean input: keep only digits
    for (char c : card) {
        if (c == ' ' || c == '-') 
            continue;
        else if (isdigit(c))
            clean += c;
        else {
            cout << "Invalid character in input. Use only digits, spaces, or -.\n";
            return 0;
        }
    }

    if (clean.empty()) {
        cout << "No number entered.\n";
        return 0;
    }

    if (luhnCheck(clean))
        cout << "Valid card number ✅\n";
    else
        cout << "Invalid card number ❌\n";

    return 0;
}
