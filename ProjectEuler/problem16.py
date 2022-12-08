import math

num = int(math.pow(2, 1000))
sum = 0

while num >= 1:
    sum += num % 10
    num = int(num//10)

print(sum)
