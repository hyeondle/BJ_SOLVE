import sys
data = list(map(int, sys.stdin.read().splitlines()))
sum = sum(data)
result = sum / len(data)
print(int(result))
sdata = sorted(data)
result2 = sdata[len(data)//2]
print(int(result2))
