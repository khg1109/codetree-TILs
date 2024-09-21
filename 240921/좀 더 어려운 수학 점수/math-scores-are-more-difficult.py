a = list(map(int , input().split()))
b = list(map(int , input().split()))

if a[0] > b[0]:
    print("A")
elif b[0] > a[0]:
    print("B")
elif b[0] == a[0]:
    if a[1] > b[1]:
        print("A")
    else:
        print("B")