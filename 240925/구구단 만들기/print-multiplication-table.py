n = list(map(int, input().split()))


for i in range(1, 10):
    for j in range(n[1], n[0]-1, -1):

        if j % 2 == 0:
            
            if j == 2:
                print("%d * %d = %d" % (j,i,j*i), end = " ")
            else:
                print("%d * %d = %d /" % (j,i,j*i), end = " ")


    print()