n = list(map(int, input().split()))



while n[0] <= n[1]:

    if n[0] % 2 == 0:
        print(n[0], end = " ")
        n[0] += 3
    else:
        print(n[0], end = " ")
        n[0] *= 2