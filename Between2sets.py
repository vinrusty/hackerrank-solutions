v = []
v1 = []
n, m = map(int, input().split())
c = 0
count1 = 0
count2 = 0
count3 = 0

a = list(map(int,input().strip().split()))[:n]
b = list(map(int,input().strip().split()))[:m]
a.sort()
b.sort()
for i in range(a[n-1], b[0]+1):
    v.append(i)

for j in v:
    for k in range(0, n):
        if j % a[k] == 0:
            count3 += 1
            if count3 == n:
                v1.append(j)
    count3 = 0
while c != len(v1):
    for i in range(0, m):
        if b[i] % v1[c] == 0:
            count1 += 1
            if count1 == m:
                count2 += 1
    count1 = 0
    c += 1
print(count2)
