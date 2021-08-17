def fact(n):
  #giving base case
  if n == 0:
    return 1
  #giving small output
  smallOutput = fact(n - 1)
  
  #mainlogic of the Problem
  output = n * smallOutput
  return output

print(fact(n))
