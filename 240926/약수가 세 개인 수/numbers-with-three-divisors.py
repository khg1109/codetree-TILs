n = list(map(int, input().split()))

cnt = 0
cnt3 = 0

for i in range(n[0], n[1]+1):
    for j in range(1,i+1):

        if i % j == 0:
            cnt += 1

        if cnt == 3:
            cnt3 += 1
        


print(cnt3)