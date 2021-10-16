arr = [1, 8, -7, 22, -15]

l = len(arr)

currSum = 0
maxSum = 0

left = -1
right = -1
for i in range(l):
    for j in range(i, l):
        currSum = 0
        for k in range(i , j + 1):
            currSum += arr[k]
        if (currSum > maxSum):
            maxSum = currSum
            left = i
            right = j

for k in range(left, right + 1):
    print(arr[k], end=',')

print()
print(maxSum)
