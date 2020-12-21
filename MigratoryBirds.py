n = input()
a = list(map(int, input().strip().split()))[:int(n)]
a.sort()
b = []
v = []
i = 1

for i in range(1, 6):
    c = 0
    for j in range(0, int(n)):
        if a[j] == i:
            c += 1
            if c == 1:
                b.append(i)
    if c != 0:
        v.append(c)
    if i == a[int(n)-1]:
        break
# print(b)
# print(v)
print(b[v.index(max(v))])

