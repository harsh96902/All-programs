n=int(input())
L1=[0] *n
L2=[0]*n
for i in range(n):
    L2[i]=int(input())
for i in range(n):
    L1[i]=int(input())
    
for i in range(n):
    L2[i]=L2[i]-L1[i];

# L2.sort()
su=0
ans=0
for i in range(n):
    # su=su+L2[i]
    if L2[i]<0:
        ans = ans + abs(L2[i])
        # su=0
    else:
        ans = ans - L2[i]    
        
print(ans)
# 785649
# 75649
# 78564