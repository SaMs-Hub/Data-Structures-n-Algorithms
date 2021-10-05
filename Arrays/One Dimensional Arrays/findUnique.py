# taking array as input
arr = [int(x) for x in input().split()]


def findUnique(arr):
    l = len(arr)
    ele = arr[0]
    for i in range(1, l):

        #logic
        ele = ele ^ arr[i]

    return ele

print(findUnique(arr))
