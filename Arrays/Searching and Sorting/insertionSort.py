arr = [4, 5, 1, 2, 3]

def func(arr):
    l = len(arr)
    for i in range(1, l):
        e = arr[i]
        j = i - 1
        while (j >= 0 and arr[j] > e):
            arr[j + 1] = arr[j]
            j -= 1
        arr[j + 1] = e

    return arr

print(func(arr))
