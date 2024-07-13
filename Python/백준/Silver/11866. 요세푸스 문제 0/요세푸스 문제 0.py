from collections import deque
import sys

input = sys.stdin.read
data = input().split()
n = int(data[0])
k = int(data[1])

queue = deque(range(1, n + 1))
result = []

while queue:
    queue.rotate(-(k - 1))
    result.append(queue.popleft())

print("<" + ", ".join(map(str, result)) + ">")