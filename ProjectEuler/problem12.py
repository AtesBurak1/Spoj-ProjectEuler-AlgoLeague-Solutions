import math
num = 0
i = 1

div_num = 0

while div_num < 500:
    num = num + i
    i = i + 1
    div_num = 0
    for j in range(1, int(math.sqrt(num))):
        if num % j == 0:
            div_num = div_num + 1
    div_num = div_num * 2

print(num)
