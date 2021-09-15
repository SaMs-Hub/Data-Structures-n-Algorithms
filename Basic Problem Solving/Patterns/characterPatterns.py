ABCD
ABCD
ABCD
ABCD



n = int(input())

i = 1
while (i <= n):
    j = 1
    while(j <= n):
        character = chr(ord("A") + j - 1)
        print(character, end='')
        j += 1
    print()
    i += 1
    
    

-----------------

ABCD
BCDE
CDEF
DEFG


n = int(input())

i = 1
while (i <= n):
    j = 1
    start = chr(ord("A") + i - 1)
    while(j <= n):
        character = chr(ord(start) + j - 1)
        print(character, end='')
        j += 1
    print()
    i += 1

    
-----------------

A
BB
CCC
DDDD


n = int(input())

i = 1
while (i <= n):
    j = 1
    while (j <= i):
        char = chr(ord('A') + i - 1)
        print(char, end='')
        j += 1
    print()
    i += 1


