def luhn_check(card_number: str) -> bool:
    total = 0
    double = False

    for i in range(len(card_number) - 1, -1, -1):
        d = int(card_number[i])

        if double:
            d *= 2
            if d > 9:
                d -= 9

        total += d
        double = not double

    return total % 10 == 0


# Example usage:
print(luhn_check("4532015112830366"))  # True
