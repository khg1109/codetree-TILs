n = list(map(int, input().split()))


sum = 0
cnt = 0


for i in range(10):

    if n[i] == 0:
        break
    
    elif n[i] % 2 == 0:
        sum += n[i]
        cnt += 1



print("%d %d" % (cnt, sum))