n = int(input())

matrix = []

# taking array input
for i in range(n):
    arr = []
    for j in range(n):
        arr.append(int(input()))
    matrix.append(arr)


def display(arr, n):
    for i in range(n):
        for j in range(n):
            print(arr[i][j], end=" ")
        print()


def rotate(arr, n):
    for i in range(n - 1):
        startCol = 0
        endCol = n - 1
        while (startCol < endCol):
            arr[i][endCol], arr[i][startCol] = arr[i][startCol],arr[i][endCol]

            startCol += 1
            endCol -= 1

    # for transpose
    for i in range(n - 1):
        for j in range(n - 1):
            if (i < j):
                arr[i][j],arr[j][i] = arr[j][i], arr[i][j]


display(matrix, n)
rotate(matrix, n)
display(matrix, n)
