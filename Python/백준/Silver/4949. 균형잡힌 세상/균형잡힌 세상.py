import sys

def is_balanced(s):
    stack = []
    matching_bracket = {')': '(', ']': '['}

    for char in s:
        if char in "([":
            stack.append(char)
        elif char in ")]":
            if not stack or stack[-1] != matching_bracket[char]:
                return False
            stack.pop()

    return not stack

data = sys.stdin.read().splitlines()
res = ""
for line in data:
    if line == "." : break
    if is_balanced(line):
        res += "yes\n"
    else:
        res += "no\n"
print(res)