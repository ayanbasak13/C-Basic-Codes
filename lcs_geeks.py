def LCS(X,Y) :
    m=len(X)
    n=len(Y)
    
    lcs=[[None for y in range(n+1)]for x in range(m+1)]
    
    for i in range(m+1) :
        for j in range(n+1) :
            if((i==0) or (j==0)) :
                lcs[i][j]=0
                
            elif (X[i-1] == Y[j-1]) :
                lcs[i][j] = 1+lcs[i-1][j-1]
            else :
                lcs[i][j] = max(lcs[i-1][j],lcs[i][j-1])
                
                
    return lcs[m][n]
    
a="qwerty"
b="abwrtz"

print(LCS(a,b))