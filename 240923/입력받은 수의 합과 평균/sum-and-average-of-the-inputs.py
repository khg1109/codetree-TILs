n = int(input())

sum = 0

for i in range(n):

    num = int(input())
    sum += num


print("%d %.1f" % (sum, sum/n))