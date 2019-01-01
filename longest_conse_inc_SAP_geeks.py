#code

T=int(input())

for i in range(0,T) :
    N=int(input())
    s=input()
    max=-5
    arr=[]
    lcis=[]
    
    s1= s.split(" ")

    arr=list(map(int,s1))

    arr.sort()
    
    
    for l in range (0,N) :
        lcis.append(1)
        
    for i in range (0,N) :
        for j in range (0,i) :
            if((arr[i]-arr[j])==1) :
                lcis[i]=lcis[j]+1
            elif ((arr[j]-arr[i])==1) :
                lcis[j]=lcis[i]+1
                
    for m in range(0,N) :
        if(lcis[m]>max) :
            max=lcis[m]
            
    print(max)