def f(n):
    if n <= 1:
        return n
    return f(n - 1) + f(n - 1)


print(f(3))
