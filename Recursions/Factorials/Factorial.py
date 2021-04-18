n = eval(input())


def factorial(n):
    assert 0 <= n == int(n), 'The number must be positive integer only!'
    if n in [0, 1]:
        return 1
    else:
        return n * factorial(n - 1)


Result = factorial(n)
print(Result)
