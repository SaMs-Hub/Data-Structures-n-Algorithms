n = eval(input())


def fibonacci(n):
    assert 0 <= n == int(n), "Fibonacci series only supports positive integers!"
    if n in [0, 1]:
        return n
    else:
        return fibonacci(n - 1) + fibonacci(n - 2)


Result = fibonacci(n)
print(Result)
