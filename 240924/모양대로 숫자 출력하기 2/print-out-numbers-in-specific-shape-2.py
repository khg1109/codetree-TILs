n = int(input())

cnt = 0


for i in range(n):
    for i in range(n):

        cnt += 2
        print(cnt, end = " ")
    
        if cnt == 10:
            cnt = 0
    print()