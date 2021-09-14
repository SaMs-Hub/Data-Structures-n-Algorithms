#using while
n = int(input())

k = 2
while (k < n):
    d = 2
    flag = False
    while (d < k):
        if (k % d == 0):
            flag = True
        d += 1
    if (flag == False):
        print(k)
    k += 1
    
#using for 
n = int(input())

for k in range(2, n - 1):
    flag = False
    for d in range(2, k - 1):
        if (k % d == 0):
            flag = True
    if not(flag):
        print(k)
