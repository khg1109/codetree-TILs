n = int(input())

sum = 0;
cnt = 0;


for i in range(n):
    student  = list(map(int, input().split()))

    
    for j in student:

        sum += j


    if sum/4 >= 60:
        print("pass")
        cnt += 1

    else:
        print("fail")
    
    sum = 0

print(cnt)