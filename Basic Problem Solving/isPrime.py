#using while
n = int(input())

d = 2
flag = False
while (d < n):
    if (n % d == 0):
        flag = True
    d += 1
if (flag):
    print("Not Prime")
else:
    print("Prime")
    
    
#using for loop
n = int(input())

flag = False
for i in range(2, n - 1):
    if (n % i == 0):
        flag = True

# checking if flag is true
if (flag):
    print("Not Prime")
else:
    print("Prime")
