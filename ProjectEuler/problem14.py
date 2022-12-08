num = 2

max1 = 0
max_num=0
count =0

while num < 1000000:
    temp = num
    while temp > 1:
        if temp%2 == 0:
            temp = temp / 2
        else:
            temp = 3 * temp + 1
        count+=1
    
    if count > max1:
        max1 = count
        max_num = num

    count = 0
    num += 1

print(max_num)