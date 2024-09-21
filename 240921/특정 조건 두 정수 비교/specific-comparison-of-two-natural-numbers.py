n1 = 0
n2 = 0

a = list(map(int, input().split()))

if a[0] < a[1]:
    n1 = 1
else:
    n1 = 0


if a[0] == a[1]:
    n2 = 1
else:
    n2 = 0

print("%d %d" % (n1, n2))