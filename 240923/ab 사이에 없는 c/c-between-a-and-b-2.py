satisfied = False

n = list(map(int, input().split()))

for i in range(n[0], n[1]+1):

    if n[2] % i == 0:
        satisfied = True


if satisfied:
    print("YES")
else:
    print("NO")