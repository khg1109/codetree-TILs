satisfied = False


for i in range(5):
    n = int(input())

    if n % 3 != 0:
        satisfied = True


if satisfied:
    print(0)
else:
    print(1)