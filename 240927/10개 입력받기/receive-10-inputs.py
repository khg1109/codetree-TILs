n = list(map(int, input().split()))

cnt = 0
sum = 0

for i in range(10):
    
    if n[i] == 0:
        break
    
    sum += n[i]

    cnt += 1




print("%d %.1f" % (sum, sum/cnt))