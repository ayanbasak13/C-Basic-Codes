N=int(input())
s=input()
arr=list(map(int,s.split()))

lis=[1]*N


def LIS(arr) :
    for i in range (1,N) :
        for j in range(0,i) :
            if((arr[j+1]-arr[j])==1) :
                lis[j+1] = max(lis[i],1+lis[j])
                
    print(lis)
                
    maximum=0
    for l in range (0,N) :
        maximum=max(maximum,lis[l])
        
    return maximum


a=LIS(arr)

print(a)

print(reversed('Ayan'))