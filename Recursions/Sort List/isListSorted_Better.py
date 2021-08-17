def isSortedBetter(a, si):
    #taking si (starting index) as an additional parameter
    # taking base condition
    l = len(a)
    if si == l - 1 or si == l:
        return True
    if a[si] > a[si + 1]:
        return False

    # distributing into smaller output
    isSmallerSorted = isSortedBetter(a, si + 1)
    if isSmallerSorted:
        return True
    else:
        return False


print(isSortedBetter([1, 2, 34, 5], 0))
