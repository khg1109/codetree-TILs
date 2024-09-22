n = list(map(int, input().split()))




if n[0] > n[1]:

    for i in range(n[0],n[1]-1, -1):
        print(i, end = " ")
else:
    for i in range(n[1],n[0]-1, -1):
        print(i, end = " ")