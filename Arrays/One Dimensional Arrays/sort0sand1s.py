arr = [0, 0, 1, 1, 0]

def func(arr):
    ones = 0
    zeroes = 0

    l = len(arr)

    for i in range(l):
        if (arr[i] == 0):
            zeroes += 1
        else:
            ones += 1
    return [zeroes, ones]

total = func(arr)
final = []
for i in range(total[0]):
    final.append(0)
for j in range(total[1]):
    final.append(1)

print(final)
