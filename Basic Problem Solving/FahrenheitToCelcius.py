#taking input from the user
fh1 = int(input())
fh2 = int(input())
step = int(input())
cth = fh1

#logic for the problem
while cth <= fh2:
    c = int((cth - 32) * 5 / 9)
    print(str(cth) + "\t" + str(c))
    cth = cth + step
