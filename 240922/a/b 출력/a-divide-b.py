n = list(map(int, input().split()))



print("%d." % (n[0] // n[1]), end = "")

n[0] %= n[1]

for i in range(20):

    n[0] *= 10
    print(n[0] // n[1] , end ="")
    n[0] %= n[1]