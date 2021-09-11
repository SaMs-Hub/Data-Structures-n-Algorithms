#using while loop
n = int(input())
count = 1
sum = 0
while (count <= n):
  sum += count
  count += 1
print(sum)

#using for loop
n = int(input())
sum = 0
for x in range(0, n + 1):
  sum += x

print(sum)
