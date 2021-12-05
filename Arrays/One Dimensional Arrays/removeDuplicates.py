arr = ['h', 'e', 'l', 'l', 'o']


def removeDuplicates(arr):

    l = len(arr)
    if ((l == 0) or (l == 1)):
        return

    prev = 0
    for curr in range(1, l):
        if (arr[curr] != arr[prev]):
            prev += 1
            arr[prev] = arr[curr]
    arr[prev + 1] = '\0'
    del(arr[prev + 1])
    return

removeDuplicates(arr)
print(arr)
