l = [6]
k = 6
for _ in range(7) :
    k = k * (_+11)
    l.append(k)

n = int(input()) - 10
print(l[n])