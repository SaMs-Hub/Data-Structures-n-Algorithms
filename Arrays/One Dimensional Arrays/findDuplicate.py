arr = [2, 2, 3, 3, 4, 4, 8]

def func(arr):
    l = len(arr)
    repeated = []
    for i in range(l):
        for j in range(i + 1, l):
            if (arr[i] == arr[j] and arr[i] not in repeated):
                repeated.append(arr[i])
    return repeated

print(func(arr))
