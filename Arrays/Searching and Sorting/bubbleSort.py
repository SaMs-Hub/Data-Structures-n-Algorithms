#example array
arr = [4, 5, 1, 2, 3]

def func(arr):
    l = len(arr)
    for i in range(l - 1):
        for j in range(l - i - 1):
            if (arr[j] > arr[j + 1]):
                arr[j], arr[j + 1] = arr[j + 1], arr[j]
    return arr

print(func(arr))
