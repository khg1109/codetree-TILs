n = list(map(int, input().split()))

prod = 1

for i in range(1, n[1]+1):

    if i % n[0] == 0:
        prod *= i

print(prod)