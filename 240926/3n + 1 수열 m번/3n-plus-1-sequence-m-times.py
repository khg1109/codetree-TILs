m = int(input())
cnt = 0

for i in range(m):

    n = int(input())


    while True:
        if n == 1:
            break
        if n % 2 == 0:
            n //= 2
        else:
            n *= 3
            n += 1
        cnt += 1

    print(cnt)
    cnt = 0