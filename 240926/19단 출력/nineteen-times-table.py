for i in range(1,19+1):
    for j in range(1,19+1):

        if j % 2 == 1:
            print("%d * %d = %d" % (i,j,i*j), end = " ")
        else:
            print("/ %d * %d = %d" % (i,j,i*j))

    
    print()