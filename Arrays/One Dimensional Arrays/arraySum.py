# taking array as input
arr = [int(x) for x in input().split()]


def arraySum(arr):
    l = len(arr)
    sum = 0
    
    #logic
    for i in range(l):
        sum += arr[i]

    return sum

print(arraySum(arr))
