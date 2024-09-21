n = int(input())


if n % 2 == 0:
    n /= 2

if n % 2 == 1:
    n += 1
    n /= 2

print(int(n))