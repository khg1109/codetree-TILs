n = int(input())

n2 = list(map(int, input().split()))




for i in range(n-1, -1, -1):

    if n2[i] % 2 == 0:
        print(n2[i], end = " ")