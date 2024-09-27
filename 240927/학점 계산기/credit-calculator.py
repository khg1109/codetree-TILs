n1 = int(input())

n2 = list(map(float, input().split()))



sum = 0

for i in n2:

    sum += i


mean  = sum/n1

print("%.1f" % (mean))

if mean >= 4.0:
    print("Perfect")
elif mean >= 3.0:
    print("Good")
else:
    print("Poor")