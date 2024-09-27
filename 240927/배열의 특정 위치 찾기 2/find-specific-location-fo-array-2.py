n = list(map(int, input().split()))

even= 0
odd = 0

for i in range(10):

    if i % 2 == 0:
        odd += n[i]
    else:
        even += n[i]

if odd > even:
    print(odd - even)

else:
    print(even - odd)