def fib(n):
    #base case
    if n == 1 or n == 2:
        return 1
    #distributing problem in smaller parts
    fib_n_1 = fib(n - 1)
    fib_n_2 = fib(n - 2)
    
    #logic
    output = fib_n_1 + fib_n_2
    return output

print(fib(n))
