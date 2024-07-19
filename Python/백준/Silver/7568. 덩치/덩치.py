n = int(input())
data = []
for _ in range(n):
    w, h = map(int, input().split())
    data.append((w, h))

ranks = []

for i in range(n):
    rank = 1
    for j in range(n):
        if i != j and data[i][0] < data[j][0] and data[i][1] < data[j][1]:
            rank += 1
    ranks.append(rank)

for rank in ranks:
    print(rank, end=" ")
