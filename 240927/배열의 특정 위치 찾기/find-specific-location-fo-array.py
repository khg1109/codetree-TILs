n = list(map(int, input().split()))

sum = 0

sum2 = 0

cnt = 0

for i in range(10):

    if i % 2 == 1:
        sum += n[i]

    if i % 3 == 2:
        sum2 += n[i]
        cnt += 1

        


print("%d %.1f" % (sum, sum2/cnt))