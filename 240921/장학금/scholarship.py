n = list(map(int, input().split()))

if n[0] >= 90 and n[1] >= 95:
    print(100000)
elif n[0] >= 90 and n[1] >= 90:
    print(50000)
else:
    print(0)