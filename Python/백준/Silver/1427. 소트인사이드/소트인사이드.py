n = input()
k = []
for _ in n :
    k.append(int(_))
s = sorted(k)
t = ''.join(map(str, s))
print(t[::-1])