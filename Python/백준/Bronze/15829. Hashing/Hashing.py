L = int(input())
S = input()
res = 0
d = "0abcdefghijklmnopqrstuvwxyz"
for _ in range(L) :
    res += (d.find(S[_]) * (31 ** (_))) % 1234567891
print(res)