n = int(input())
m = int(input())
s = list(map(str, input()))

f = ['I']
for k in range(n) :
    f.append('O')
    f.append('I')
l = len(f)
count = 0
for i in range(m - l + 1) :
    miss = 0
    if s[i] == 'I' and s[i + l - 1] == 'I' :
        for j in range(l) :
            if f[j] != s[j + i] :
                miss = 1
                break
        if miss == 0 :
            count += 1
print(count)

###
#n = int(input())
#m = int(input())
#s = input()

#pattern_length = 2 * n + 1
#count = 0
#i = 0
#result = 0

#while i < (m - 1):
    #if s[i:i+3] == 'IOI':
        #count += 1
        #if count == n:
            #count -= 1
            #result += 1
        #i += 2
    #else:
        #count = 0
        #i += 1

#print(result)
#100점짜리
###
