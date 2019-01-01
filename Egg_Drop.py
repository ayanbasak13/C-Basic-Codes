N=10
K=2

T = [[0 for x in range (N+1)] for y in range (K+1)]

    
for j in range (0,K+1) :
    T[j][0]=0
for i in range (0,N+1) :
    T[0][i]=0
    T[1][i]=i
    
    
  
for k in range (2,K+1) :
    for n in range (1,N+1) :
        res = 100000000000
        if(n>=k) :
            for l in range (1,n+1) :
                temp = 1 + max(T[k][n-l],T[k-1][l-1])
                if(temp<res) :
                    res=temp
            T[k][n]=res
        


