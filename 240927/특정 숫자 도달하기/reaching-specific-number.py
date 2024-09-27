n = list(map(int, input().split()))

sum = 0
cnt = 0
for i in n:


    if i >= 250:
        break

    sum += i
    cnt += 1


print("%d %.1f" % (sum, sum/cnt))