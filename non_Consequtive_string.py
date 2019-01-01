s='jazshu'
x='ayjnzh'

l_s=len(s)
l_x=len(x)
flag1=[]
flag2=[]
arr=[]

for f in range (0,l_s) :
    flag1.append(0)
for f in range (0,l_x) :
    flag2.append(0)
    
    
for i in range (0,l_s) :
    for j in range (0,l_x) :
        if (s[i]==x[j]) :
            flag1[i]=1
            flag2[j]=1
            
            
            
for i in range (0,l_s) :
    if (flag1[i]==0) :
        arr.append(s[i])

        
for j in range (0,l_x) :
    if (flag2[j]==0) :
        arr.append(x[j])

        
        
arr.sort()        
print(arr)

