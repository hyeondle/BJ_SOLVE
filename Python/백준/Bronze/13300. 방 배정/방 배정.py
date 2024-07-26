import sys
d = sys.stdin.read().splitlines()

n, k = map(int, d[0].split())
m, f = [], []
for i in range(n) :
    s, g = map(int, d[i+1].split())
    if s == 1 :
        m.append(g)
    else :
        f.append(g)
count = 0
m.sort()
f.sort()

lis = []
for i in m :
    if lis == [] :
        count += 1
        lis.append(i)
        continue
    if lis[0] != i :
        count += 1
        lis.clear()
        lis.append(i)
        continue
    if len(lis) == k :
        count += 1
        lis.clear()
        lis.append(i)
        continue
    lis.append(i)
for i in f :
    if lis == [] :
        lis.append(i)
        count += 1
        continue
    if lis[0] != i :
        count += 1
        lis.clear()
        lis.append(i)
        continue
    if len(lis) == k :
        count += 1
        lis.clear()
        lis.append(i)
        continue
    lis.append(i)
print(count)
    