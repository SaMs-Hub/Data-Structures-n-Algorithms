n = eval(input("Enter your value to be converted:"))


def decimalToBinary(n):
    assert int(n) == n, "The parameter must be integer only!"
    if n == 0:
        return 1

    else:
        return n % 2 + 10 * decimalToBinary(int(n / 2))


Result = decimalToBinary(n)
print(Result)
