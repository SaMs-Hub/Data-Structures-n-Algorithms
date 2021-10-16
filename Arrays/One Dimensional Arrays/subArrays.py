arr = [1, 2, 3, 44]

l = len(arr)

for i in range(l):
    for j in range(i, l):
        for k in range(i, j + 1):
            print(arr[k], end=',')
        print()
