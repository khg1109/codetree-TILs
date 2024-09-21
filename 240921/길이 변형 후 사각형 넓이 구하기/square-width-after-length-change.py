a = list(map(int,input().split()))

a[0] += 8
a[1] *= 3


print("%d\n%d\n%d" % (a[0], a[1], a[0]*a[1]))