a = input().split()


temp = a[0]
a[0] = a[1]
a[1] = temp


print("%d %d" % (int(a[0]) , int(a[1])))