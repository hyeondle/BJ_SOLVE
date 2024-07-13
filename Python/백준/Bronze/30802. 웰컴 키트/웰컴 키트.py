import sys
import math

data = sys.stdin.read().splitlines()

n = int(data[0])
shirts = list(map(int, data[1].split()))
t, p = map(int, data[2].split())

p_s = n//p
p_e = n%p
sums = 0
for _ in shirts :
    d = _ / t
    sums += math.ceil(d)
print(sums)
print(p_s, p_e)