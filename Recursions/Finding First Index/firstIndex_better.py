def firstIndexBetter(a, x, si):
    # base case
    l = len(a)
    if l == si:
        return -1
    if a[si] == x:
        return si

    # Problems logic
    listOutput = firstIndexBetter(a, x, si + 1)
    return listOutput


print(firstIndexBetter([1, 2, 34, 5, 22, 2, 2], 2, 0))
