import numpy as np

arr = np.array([[11, 12, 13], [14, 15, 16], [17, 18,19]])
m = int(input())
n = int(input())

print(arr)

for j in range(0, n):
    if (j % 2 == 0):
        for i in range(0, m ):
            print(arr[i][j], end=" ")
    else:
        for i in range(m - 1, 0, -1):
            print(arr[i][j], end=" ")

