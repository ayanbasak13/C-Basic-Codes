T=int(input())

for i in range (0,T) :
    N=int(input())
    s=input()
    arr=[]
    arr=list(map(int,s.split()))
    
    arr=sorted(arr)
    

    
    
    i=0
    while (i<N-1) :
        temp=arr[i]
        arr[i]=arr[i+1]
        arr[i+1]=temp
        i+=2
        
    for j in range (0,N) :
        print(str(arr[j]) + " ",end="",flush=True)