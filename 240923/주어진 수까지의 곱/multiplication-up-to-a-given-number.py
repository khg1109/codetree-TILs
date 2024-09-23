n = list(map(int, input().split()))




prod = 1


for i in range(n[0], n[1]+1):

    prod *= i

print(prod)