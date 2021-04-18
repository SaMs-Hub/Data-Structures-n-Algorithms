a = eval(input("Enter your first value:"))
b = eval(input("Enter your second value:"))


def gcd(a, b):
    assert int(a) == a and int(b) == b, "The numbers must be integer only!"
    if a < 0:
        a = -1 * a
    if b < 0:
        b = -1 * a
    if b == 0:
        return a
    else:
        return gcd(b, a % b)


Result = gcd(a, b)
print(Result)
