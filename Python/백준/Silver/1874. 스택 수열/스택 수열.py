import sys
n = int(input())
data = sys.stdin.read().splitlines()
data = list(map(int, data))
i = -1
k = 1
stack = []
result = ""
for _ in range(n) :
    t = data[_]
    while t >= k :
        stack.append(k)
        k += 1
        i += 1
        result += "+\n"
    if stack[i] == t :
        stack.pop()
        i -= 1
        result += "-\n"
    else :
        result = "NO"
        break
print(result)
    
    