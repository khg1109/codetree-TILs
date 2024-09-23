n = list(map(int, input().split()))

sum = 0
temp = 0

if n[0] < n[1]:
    temp = n[0]
    n[0] = n[1]
    n[1] = temp
    

for i in range(n[0], n[1]+1):

    if i % 5 == 0:
        sum += i

print(sum)