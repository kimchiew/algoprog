n = int(input())
m = int(input())
k = int(input())

if k >= n * m:
    print("NO")
else:
    if k % m == 0 or k % n == 0:
        print("YES")
    else:
        print("NO")
