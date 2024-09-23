satisfied = False

n = list(map(int, input().split()))

for i in range(n[0], n[1]+1):

    if i % n[2] == 0:
        satisfied = True


if satisfied:
    print("NO")
else:
    print("YES")