n = int(input())


if n % 2 == 1:
    if n <= 7:
        print(31) 
    else:
        print(30)
elif n == 2:
    print(28)
else:
    if n <= 7:
        print(30)
    else:
        print(31)