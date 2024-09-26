n = int(input())


for i in range(n):

    k = list(map(int, input().split()))

    sum = 0
    for i in range(k[0], k[1]+1):
        if i % 2 == 0:
            sum += i

    print(sum)