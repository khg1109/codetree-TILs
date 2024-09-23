n = list(map(int, input().split()))


sum = 0

for i in range(n[0], n[1]+1):

    if i % 2 == 0:
        sum += i


print(sum)