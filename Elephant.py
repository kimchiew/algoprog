a1 = int(input())
b1 = int(input())
a2 = int(input())
b2 = int(input())

if max(a1, a2) - min(a1, a2) == max(b1, b2) - min(b1, b2):
    print("YES")
else:
    print("NO")
