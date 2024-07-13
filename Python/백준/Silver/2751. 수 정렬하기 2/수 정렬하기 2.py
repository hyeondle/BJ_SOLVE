import sys
data = sys.stdin.read().splitlines()
lis = []
for _ in range(int(data[0])) :
    lis.append(int(data[_+1]))
slis = sorted(lis)
text = '\n'.join(map(str,slis))+'\n'
print(text)