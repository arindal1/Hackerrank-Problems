input()
a = list(map(int, input().split()))
m = M = a[0]
x = y = 0
for i in a[1:]:
    if i > M:
        M = i
        x += 1
    elif i < m:
        m = i
        y += 1
print(x, y)
