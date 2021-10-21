arr = [1, 2, 3, 4, 5]
key = 3

def func(arr, key):
    l = len(arr)
    for i in range(l):
        if (arr[i] == key):
            return i
    return -1

print(func(arr, key))
