# using while loop
n = int(input())
count = 2
sum = 0
while (count <= n):
  sum += count
  count += 2
print(sum)


#using for loop
n = int(input())
sum = 0
for x in range(0, n + 1):
  if (x % 2 == 0):
    sum += x

print(sum)
