n = int(input())

distinction = True

for i in range(1, n+1):

    if i == 1:
        continue

    for j in range(2, i):
        if j == 1 :
            continue
        elif i % j == 0:
            distinction = False

    if distinction:
        print(i, end = " ")
    
    distinction = True