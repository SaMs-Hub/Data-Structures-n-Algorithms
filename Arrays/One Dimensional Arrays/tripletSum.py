arr = [1, 2, 3, 4, 5]
sum = 8

def func(arr):
    l = len(arr)
    for i in range(l):
        for j in range(i + 1, l):
            for k in range(j + 1, l):
                if (arr[i] + arr[j] + arr[k] == sum):
                    print(f"{arr[i], arr[j], arr[k]}")

func(arr)
