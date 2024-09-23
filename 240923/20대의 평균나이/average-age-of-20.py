sum = 0
cnt = 0

while True:
    
    n = int(input())
    

    if 20 <= n and n < 30:
        sum += n
        cnt += 1
    else:
        break


print("%.2f" % (sum / cnt))