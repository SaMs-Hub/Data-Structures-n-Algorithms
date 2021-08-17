def isSorted(a):
    # taking base condition
    l = len(a)
    if l == 0 or l == 1:
        return True
    if a[0] > a[1]:
        return False

    # distributing into smaller output
    smallerList = a[1:]
    isSmallerSorted = isSorted(smallerList)
    if isSmallerSorted:
        return True
    else:
        return False


print(isSorted([1, 2, 34, 5]))
