def fact(n):
  # base case
  if n == 0:
    return 1
  # splitting in small output
  smallOutput = fact(n - 1)
  
  #mainlogic of the Problem
  output = n * smallOutput
  return output

print(fact(n))
