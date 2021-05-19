x = [5, 11, 2, 7, 33, 52, 21]


def printingPairs(x):
    for a in x:
        for b in x:
            print(str(a) + "," + str(b))


print(printingPairs(x))
