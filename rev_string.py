lis=[]
T=int(input())


for i in range (0,T) :
    s=input()
    
    lis=s.split(".")
    k=len(lis)-1

    while (k>=0) :
        if(k>0) :
            print(lis[k]+".", end='', flush=True)
            k=k-1
        else :
            print(lis[k])
            k=-1
            
'''s1='cdab'
s1=sorted(s1)'''