#Only works if size is even
arr = [1, 2, 3, 4, 5, 6]

def func(arr):
    l = len(arr)
    arr[1:l:2], arr[:l:2] = arr[:l:2], arr[1:l:2]
    return arr

func(arr)
print(arr)
