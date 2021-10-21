arr = [4, 5, 1, 2, 3]

def func(arr):
    l = len(arr)
    for i in range(l - 1):
        minIndex = i
        for j in range(i + 1, l):
            if (arr[j] < arr[minIndex]):
                minIndex = j
        arr[i], arr[minIndex] = arr[minIndex], arr[i]
    return arr

func(arr)
print(arr)
