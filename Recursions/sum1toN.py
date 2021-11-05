def sum(n):
    if (n == 0):
        return 0

    smallerOutput = sum(n - 1)
    output = n + smallerOutput
    return output
