satisfied = False

n = int(input())



for i in range(2, n+1):

    if n % i == 0:
        satisfied = True

if satisfied:
    print("P")

else:
    print("C")