import sys

data = sys.stdin.read().splitlines()

n = int(data[0])

coordinates = []

for i in range(1, n + 1):
    x, y = map(str, data[i].split())
    coordinates.append((x, y))

coordinates.sort(key=lambda coord: (int)(coord[0]))

for coord in coordinates:
    print(coord[0], coord[1])