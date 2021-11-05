def binarySearch(array, x, si, ei):

    if (si > ei):
        return -1

    mid = (si + ei)//2

    if (array[mid] == x):
        return mid

    elif (array[mid] < x):
        return binarySearch(array, x, mid + 1, ei)
    else:
        return binarySearch(array, x, si, mid - 1)
