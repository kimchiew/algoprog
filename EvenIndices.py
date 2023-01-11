n = int(input())
a = list(map(int, input().split()))
ans = []

for i in range(0, n, 2):
    ans.append(a[i])

print(*ans)
