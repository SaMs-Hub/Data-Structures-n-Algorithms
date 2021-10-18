arr = [1, 2, 3, 4, 5]
sum = 5

def func(arr):
    l = len(arr)
    for i in range(l):
        for j in range(i + 1, l):
            if (arr[i] + arr[j] == sum):
                print(f"{arr[i], arr[j]}")

func(arr)
