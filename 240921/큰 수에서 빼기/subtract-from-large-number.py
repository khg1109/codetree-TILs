a = list(map(int, input().split()))



if a[0] > a[1]:
    print("%d" % (a[0] - a[1]))
else:
    print("%d" % (a[1] - a[0]))