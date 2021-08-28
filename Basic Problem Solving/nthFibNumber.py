n = int(input())
counter = 1
first = 1
second = 1
while (counter < n):
  temp = first + second
  first = second
  second = temp
  counter += 1
print(first)
