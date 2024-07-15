import math

n = int(input())
k = str(math.factorial(n))[::-1]
count = 0
for _ in k :
    if _ == '0' :
        count += 1
    else :
        break
print(count)