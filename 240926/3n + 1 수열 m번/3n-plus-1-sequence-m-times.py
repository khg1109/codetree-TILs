m = int(input())
cnt = 1

for i in range(m):

    n = int(input())


    while True:
        if n % 2 == 0:
            n //= 2
        else:
            n *= 3
            n += 1

        if n == 1:
            break
        cnt += 1

    print(cnt)