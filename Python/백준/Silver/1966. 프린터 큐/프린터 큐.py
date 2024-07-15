from collections import deque

l = int(input())

for _ in range(l) :
    n, m = map(int, input().split())
    lis = list(map(int, input().split()))
    que = deque()
    for i in range(n) :
        que.append([i, lis[i]])
    count = 1
    lis = sorted(lis)
    max_t = lis[-1]
    while True :
        if que[0][0] == m and que[0][1] == max_t: 
            print(count)
            break
        if que[0][1] == max_t :
            que.popleft()
            lis.pop()
            if lis:
                max_t = lis[-1]
            count += 1
        else :
            que.rotate(-1)
    
    