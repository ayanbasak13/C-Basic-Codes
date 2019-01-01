#code
T=int(input())
arr1=[]
arr2=[]
for i in range (0,T) :
    arr=[]
    arr1=[]
    arr2=[]
    n=input()
    l=list(map(int, n.split(" ")))
    N1=l[1]
    N2=l[0]
    
   
    l1=input()
    l2=input()
    arr1 = list(map(int, l1.split(" ")))
    arr2 = list(map(int, l2.split(" ")))
    k1=max(N1,N2)
    k2=min(N1,N2)
    flag1=[]
    flag2=[]
    
    for i in range (0,k1) :
        flag1.append(0)
    for j in range (0,k2) :
        flag2.append(0)
    
    c1=0
    c2=0
    
    
    while(len(arr) < (k1+k2+1)) :
        if(arr1[c1] > arr2[c2]) :
            while(arr1[c1] > arr2[c2]) :
                if(c1 <= len(arr1)-1) :
                    if (flag1[c1]==0) :
                        arr.append(arr1[c1])
                        flag1[c1]=1
                        c1+=1
                
        else :
            while(arr2[c2] > arr1[c1]) :
                if (c2 <= len(arr2)-1) :
                    if(flag2[c2]==0) :
                        arr.append(arr2[c2])
                        flag2[c2]=1
                        c2+=1
       