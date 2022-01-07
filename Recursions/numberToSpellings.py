words = ["zero","one", "two", "three", "four", "five", "six", "seven", "eight", "nine"]

def printSpellings(n):
    
    if (n == 0):
        return
    
    printSpellings(n // 10)
    digit = n % 10
    print(words[digit], end=" ")
    return


print(printSpellings(10))
    
