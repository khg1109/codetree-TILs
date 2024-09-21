n = list(map(int, input().split()))


n2 = [False] * 6

n2[0] = n[0] >= n[1]  # n[0]이 n[1]보다 크거나 같은지
n2[1] = n[0] > n[1]   # n[0]이 n[1]보다 큰지
n2[2] = n[1] >= n[0]  # n[1]이 n[0]보다 크거나 같은지
n2[3] = n[1] > n[0]   # n[1]이 n[0]보다 큰지
n2[4] = n[0] == n[1]  # n[0]과 n[1]이 같은지
n2[5] = n[0] != n[1]  # n[0]과 n[1]이 다른지



for i in n2:
    
    if i:
        print(1)
    else:
        print(0)