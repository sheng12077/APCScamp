import sys
maxn=1000000
f=[0,1]*(maxn//2+1)
f[0],f[1],f[2]=0,0,1
h=int(maxn**0.5)
for i in range(3,h+1,2):
    if f[i]==1: 
        for j in range(i*i,maxn+1,i*2):
            f[j]=0

w = 0
for i in sys.stdin:
    if w == 0:    #把第一個丟掉
        w = 1
        continue
    n=int(i)
    if f[n]:
        print("YES")
    else:
        print("NO")
