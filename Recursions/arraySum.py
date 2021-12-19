def arrSum(arr,si):

    l = len(arr)

    if (si == l):
        return 0


    smallerOutput = arrSum(arr, si + 1)
    return arr[si] + smallerOutput


arr = [1, 2, 3]
print(arrSum(arr, 0))
