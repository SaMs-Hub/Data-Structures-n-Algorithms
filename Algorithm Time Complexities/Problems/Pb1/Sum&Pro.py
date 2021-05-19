x = [5, 11, 2, 7, 33, 52, 21, 44]


def foo(x):
    sum = 0
    product = 1

    for i in x:
        sum += i

    for i in x:
        product *= i

    return str(sum), str(product)


print(foo(x))
