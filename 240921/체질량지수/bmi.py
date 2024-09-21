n = list(map(int, input().split()))


b = (10000*n[1])/(n[0]**2)


print("%d" %(b))


if b >= 25:
    print("Obesity")