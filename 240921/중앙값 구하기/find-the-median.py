n = list(map(int, input().split()))



if n[0] >= n[1]:

    if n[0] >= n[2]:
        print(n[2])
    else:
        print(n[0])


else:

    if n[1] >= n[2]:
        print(n[2])
    else:
        print(n[1])