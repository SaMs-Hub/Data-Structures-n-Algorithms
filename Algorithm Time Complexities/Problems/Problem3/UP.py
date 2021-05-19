x = [5, 11, 2, 7, 33, 52, 21, 44]


def printingUnorderedPairs(x):
    for a in range(0, len(x)):
        for b in range(a+1, len(x)):
            print(x[a],x[b])


print(printingUnorderedPairs(x)
