import sys
import re

def is_vps(s):
    pattern = re.compile(r'\(\)')
    while pattern.search(s):
        s = pattern.sub('', s)
    return s == ''

data = sys.stdin.read().splitlines()

results = []

for _ in range(int(data[0])):
    line = data[_ + 1]
    if is_vps(line):
        results.append("YES")
    else:
        results.append("NO")

print("\n".join(results))