def lastIndexBetter(a, x, si):
    # base case
    l = len(a)
    if l == si:
        return -1
    listOutput = lastIndexBetter(a, x, si + 1)

    # logic
    if listOutput != -1:
        return listOutput
    else:
        if a[si] == x:
            return si
        else:
            return -1


print(lastIndexBetter([1, 2, 34, 5, 22, 2, 2], 2, 0))
