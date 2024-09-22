n = input().split()


if n[0] == 'A':
    for i in range(1,int(n[1])+1):
        print(i, end = " ")
else:
    for i in range(int(n[1], 0, -1)):
        print(i, end = " ")