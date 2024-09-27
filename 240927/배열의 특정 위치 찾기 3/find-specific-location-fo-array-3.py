n = list(map(int, input().split()))

cnt = 0

for i in n:



    if i == 0:
        break
    
    cnt += 1

print(n[cnt-1]+ n[cnt-2]+n[cnt-3])