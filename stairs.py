'''N=12

a=[]
nos=[]
flag=[]


for i in range (0,N):
    k= i*(i+1)/2
    if(k<N):
        a.append(k)
        nos.append(i)
    
for j in range(0,len(a)) :
    max=a[0]
    index=0
    if(a[j]>max):
        max=a[j]
        index=j
        
print(nos[j])'''






#code
T=int(input())


a=[]
nos=[]
flag=[]


for k in range (0,T):
    N=int(input())
    for i in range (0,N):
        k= i*(i+1)/2
        if(k<=N):
            a.append(k)
            nos.append(i)
        
    for j in range(0,len(a)) :
        max=a[0]
        index=0
        if(a[j]>max):
            max=a[j]
            index=j
            
    print(nos[j])
    print("\n")

        

        
