def target(array,si, x):

    l = len(array)

    if (si == l):
        return -1

    if (array[si] == x):
        return si

    output = target(array, si + 1, x)

    if (output != -1):
        return output
    else:
        return -1
