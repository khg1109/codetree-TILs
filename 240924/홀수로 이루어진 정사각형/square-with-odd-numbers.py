n = int(input())

cnt = 11
for i in range(n):
    for j in range(n):
        print(cnt+(2*j), end = " ")
    cnt += 2
    
    print()