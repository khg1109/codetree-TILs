n = int(input())

sum = 0

for i in range(n):
    num = int(input())

    if num % 2 == 1 and num % 3 ==0:
        sum += num

print(sum)