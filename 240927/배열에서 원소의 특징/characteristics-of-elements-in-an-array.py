n = list(map(int, input().split()))


cnt = 0

for i in range(10):

    if n[i] % 3 == 0:
        break
    cnt += 1


print(n[cnt-1])