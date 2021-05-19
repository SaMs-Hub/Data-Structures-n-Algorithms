x = [5, 11, 2, 7, 33, 52, 21, 44]


def maxArray(x, n):
    if n == 1:
        return x[0]
    return max(x[n - 1], maxArray(x, n - 1))


print(maxArray(x, len(x)))
