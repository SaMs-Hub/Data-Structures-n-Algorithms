def firstIndex(a, x):
    # base case
    l = len(a)
    if l == 0:
        return -1
    if a[0] == x:
        return 0

    # distributing into smaller
    smallerList = a[1:]

    # problem logic
    smallerListOutput = firstIndex(smallerList, x)

    #returning +1 since it is a sub-list
    return smallerListOutput + 1


print(firstIndex([1, 2, 34, 5, 22, 2, 2], 2))
