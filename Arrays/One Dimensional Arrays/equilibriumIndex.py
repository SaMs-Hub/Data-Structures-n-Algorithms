def sumArr(arr):
    l = len(arr)
    
    sum = 0
    for i in range(l):
        sum  += arr[i]
    return sum

def equibIndex(arr):
    
    l = len(arr)

    i = 1
    while (i <= l//2):
        mid = i
        arr1 = arr[0:mid]
        arr2 = arr[mid + 1:]
        if (sum(arr1) == sum(arr2)):
            return mid + 1
            break
        else:
            i += 1
            
    return -1


arr = [1, 2, 3, 4, 1, 2, 3]
print(equibIndex(arr))
