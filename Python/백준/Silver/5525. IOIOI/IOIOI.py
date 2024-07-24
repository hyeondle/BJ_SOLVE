n = int(input())
m = int(input())
s = list(map(str, input()))

f = ['I']
for k in range(n) :
    f.append('O')
    f.append('I')
l = len(f)
count = 0
for i in range(m - l + 1) :
    miss = 0
    if s[i] == 'I' and s[i + l - 1] == 'I' :
        for j in range(l) :
            if f[j] != s[j + i] :
                miss = 1
                break
        if miss == 0 :
            count += 1
print(count)