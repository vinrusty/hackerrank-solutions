a = list(map(int, input().strip().split()))[:3]
b = list(map(int, input().strip().split()))[:3]
c1 = 0
c2 = 0
for i in range(0, 3):
    if a[i] - b[i] > 0:
        c1 += 1
    elif a[i] - b[i] < 0:
        c2 += 1
print(c1, c2)
