a = int(input())
n = list(map(int, input().split()))


for i in n:

    if a > i:
        print(1)
    else:
        print(0)