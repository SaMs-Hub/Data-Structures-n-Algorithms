def lastIndex(a, x):
    # base case
    l = len(a)
    if l == 0:
        return -1

    # distributing into smaller part
    smallerList = a[1:]
    smallerListOutput = lastIndex(smallerList, x)
    
    #logic
    if smallerListOutput != -1:
        return smallerListOutput + 1
    else:
        if a[0] == x:
            return 0
        else:
            return -1


print(lastIndex([1, 2, 34, 5, 22, 2, 2], 2))
