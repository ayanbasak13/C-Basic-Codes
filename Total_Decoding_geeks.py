#code

s='25224'
l=len(s)

lis=[]


for i in range (0,l) :
    lis.append(0)
lis[0]=1

z = s[0] + s[1]
print(z)
if(int(z)<=26) :
    lis[1]=lis[0]+1
else :
    lis[1]=lis[0]

for i in range (2,l) :
    #print(s[i])
    k=s[i-1]+s[i]
    #print(k)
    sum=0
    if(int(k)<=26) : 
        lis[i] = lis[i-1] + lis[i-2]
    else :
        lis[i]=lis[i-1]
        
  
