1
12
123
1234


n = int(input())

i = 1
while (i <= n):
    j = 1
    while (j <= i):
        print(j, end='')
        j += 1
    print()
    i += 1
    
    
----------------
1
23
345
4567


n = int(input())

i = 1
while (i <= n):
    j = 1
    p = i
    while (j <= i):

        print(p, end='')
        j += 1
        p += 1
    print()
    i += 1
    
    
    
----------------
1
23
456
78910


n = int(input())

i = 1
p = 1
while (i <= n):
    j = 1

    while (j <= i):

        print(p, end='')
        j += 1
        p += 1
    print()
    i += 1
    
    
----------------
*
**
***
****


n = int(input())


i = 1
while (i <= n):
    j = 1
    while (j <= i):
        print("*",end='')
        j += 1
    print()
    i += 1
