# should be sorted out first before using

arr = [1, 2, 3, 4, 5]
key = 3

def func(arr, key):
    l = len(arr)
    s = 0
    e = l - 1
    while (s <= e):
        mid = (s + e)//2
        if (arr[mid] == key):
            return mid
        elif (arr[mid] < key):
            s = mid + 1
        else:
            e = mid - 1
    return -1

print(func(arr, key))
