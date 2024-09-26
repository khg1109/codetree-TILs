n = list(map(int, input().split()))



for i in range(2, 10, 2):

    for j in range(n[1], n[0]-1):
        
        print("%d * %d = %d / " % (j, i, j*i))
    print()