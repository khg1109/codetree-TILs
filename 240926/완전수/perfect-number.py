n = list(map(int, input().split()))


sum = 0
cnt = 0
for i in range(n[0],n[1]+1):
    for j in range(1, i-1):
        
        if i % j == 0:
            sum += j

    
    if sum == i:
        cnt += 1
        
    sum = 0

print(cnt)