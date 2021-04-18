base = eval(input("Enter your base value:"))
exp = eval(input("Enter your exponent value:"))


def power(base, exp):
    assert 0 <= exp == int(exp), "The exponent must be a positive integer only!"
    if exp == 0:
        return 1
    if exp == 1:
        return base
    else:
        return base * power(base, exp - 1)


Result = power(base, exp)
print(Result)
