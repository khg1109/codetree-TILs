n = list(map(int, input().split()))

satisfied = False


for i in range(n[0], n[1]+1):

    if (1920 % i == 0) and (2880 % i == 0):
        satisfied = True

if satisfied:
    print(1)
else:
    print(0)