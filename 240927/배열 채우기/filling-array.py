n = list(map(int, input().split()))

cnt = 0 
arr = [0] * 10  

for i in range(10):

    if 0 == n[i]:
        break
    arr[i] = n[i]
    cnt = i

for i in range(cnt, -1,-1):
    print(arr[i], end = " ")