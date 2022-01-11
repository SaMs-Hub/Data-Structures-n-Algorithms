# taking array as input
arr = [int(x) for x in input().split()]


def swapPair(arr):
    l = len(arr)
    
    # logic responsible for swapping of two pairs
    arr[1:l:2], arr[:l:2] = arr[:l:2], arr[1:l:2]
    
    return arr

print(swapPair(arr))
