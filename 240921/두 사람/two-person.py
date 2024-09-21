n1 = input().split()
n2 = input().split()


if (int(n1[0]) >= 19 and n1[1] == 'M') or (int(n2[0]) >= 19 and n2[1] == 'M'):
    print(1)
else:
    print(0)