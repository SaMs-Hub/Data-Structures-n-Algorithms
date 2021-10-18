arr1 = [1, 2, 3, 4, 5]
arr2 = [5,4, 8, 9, 10]

def func(arr1, arr2):
    l1 = len(arr1)
    l2 = len(arr2)

    intersection = []
    for i in range(l1):
        for j in range(l2):
            if (arr1[i] == arr2[j] and arr1[i] not in intersection):
                intersection.append(arr1[i])
    return intersection

print(func(arr1, arr2))
