def power(x, n):
     
    if (n == 0):
        return 1
     
    smallPower = power(x, n//2)
    if (n % 2 == 0):
        return smallPower * smallPower
    else:
        return x * smallPower * smallPower
     
     
print(power(2, 3))

TC = O(logn)
SC = O(logn)
