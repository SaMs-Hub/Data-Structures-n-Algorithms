m = int(input())
n = int(input())
k = int(input())
s = int(input())

park = [[(input()) for x in range(m)] for y in range(n)]

def magicalPark(arr, m, n, k, s):

    success = True

    for i in range(0, m):
        for j in range(0, n):
            ch = arr[i][j]

            if (s < k):
                break

            if (ch == '*'):
                s += 5
            elif (ch == '.'):
                s -= 2
            else:
                break

            if (j != n - 1):
                s -= 1
    if (success):
        print("yes", s)
    else:
        print("No")

magicalPark(park, m, n, k, s)
