n = int(input())


cnt = 0

for i in range(n):
    cnt += 1
    for j in range(n):
        print(cnt, end = "")
    print()