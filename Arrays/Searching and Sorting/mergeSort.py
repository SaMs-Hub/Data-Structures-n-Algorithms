def merge(arr1, arr2, arr):
    i = 0
    j = 0
    k = 0

    l1 = len(arr1)
    l2 = len(arr2)

    while ((i < l1) and (j < l2)):
        if (arr1[i] < arr2[j]):
            arr[k] = arr1[i]
            k += 1
            i += 1

        else:
            arr[k] = arr2[j]
            k += 1
            j += 1

    while (i < l1):
        arr[k] = arr1[i]
        k += 1
        i += 1

    while (j < l2):
        arr[k] = arr2[j]
        k += 1
        j += 1

def mergeSort(arr):

    l = len(arr)

    if ((l == 0) or (l == 1)):
        return

    mid = l//2

    arr1 = arr[0:mid]
    arr2 = arr[mid:]

    mergeSort(arr1)
    mergeSort(arr2)

    merge(arr1, arr2, arr)
