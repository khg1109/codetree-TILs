n = int(input())
n1 = 0
n2 = n

for i in range(n*2):

    if i % 2 == 0:
        n1 += 1
        for j in range(n1):
            print("*", end = " ")

    else:
        for j in range(n2):
            print("*", end = " ")
        n2 -= 1

    print()