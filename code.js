function luhnCheck(cardNumber) {
    let sum = 0;
    let doubleDigit = false;

    for (let i = cardNumber.length - 1; i >= 0; i--) {
        let d = parseInt(cardNumber[i]);

        if (doubleDigit) {
            d *= 2;
            if (d > 9) d -= 9;
        }

        sum += d;
        doubleDigit = !doubleDigit;
    }

    return sum % 10 === 0;
}

// Example usage:
console.log(luhnCheck("4532015112830366")); // true (valid)
