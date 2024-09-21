a = 0

n1 = input().split()
n2 = input().split()
n3 = input().split()


if n1[0] == 'Y' and int(n1[1]) >= 37:
    a += 1

if n2[0] == 'Y' and int(n2[1]) >= 37:
    a += 1

if n3[0] == 'Y' and int(n3[1]) >= 37:
    a += 1



if a >= 2:
    print("E")
else:
    print("N")