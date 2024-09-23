n = list(map(int, input().split()))


prod = 1

for i in range(n[1]):

    prod *= n[0]

print(prod)