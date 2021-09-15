1
22
333
4444


n = int(input())

i = 1
while (i <= n):
    j = 1
    while (j <= i):
        print(i, end='')
        j += 1
    print()
    i += 1
    
    
    
------------------

1
21
321
4321


n = int(input())

i = 1
while (i <= n):
    j = 1
    while (j <= i):
        print(i - j + 1, end='')
        j += 1
    print()
    i += 1
    
    
------------------

1
11
121
1221
12221


n = int(input())

i = 1
while (i <= n):
    j = 1
    while (j <= i):
        if (j == 1) or (j == i):
            print('1', end='')
        else:
            print('2', end='')
        j += 1
    print()
    i += 1
    
    
------------------

1
11
202
3003
40004


n = int(input())

i = 1
while (i <= n):
    j = 1
    while (j <= i):
        if (j == 1) or (j == i):
            if (i - 1 == 0):
                print('1', end='')
            else:
                print(i - 1, end='')
        else:
            print('0', end='')
        j += 1
    print()
    i += 1
    
    
 ------------------

12345
1234
123
12
1

n = int(input())

i = 1
while (i <= n):
    j = 1
    while (j <= n - i + 1):

        print(j, end='')
        j += 1
    print()
    i += 1
