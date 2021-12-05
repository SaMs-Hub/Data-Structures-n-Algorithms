import numpy as np

arr = np.array([[7,8,9,10],[11, 12, 13, 14], [15, 16, 17, 18], [19, 20, 21, 22]])
m = int(input())
n = int(input())

print(arr)

def spiralPrint(arr, m, n):

    str = 0
    stc = 0

    enr = m - 1
    enc = n - 1

    while (str <= enr and stc <= enc):
        for i in range(stc, enc):
            print(arr[str][i], end=' ')
        str+=1

        for i in range(str, enr):
            print(arr[i][enc], end=' ')
        enc-=1

        if (enc > stc):
            for i in range(enc, stc, -1):
                print(arr[enr][i], end= ' ')
            enr -= 1

        for i in range(enr, str, -1):
            print(arr[i][stc], end= ' ')
        stc += 1

spiralPrint(arr, m, n)
