s1="bzxnmkp"
s2="pbxamdk"

lcs=[[None]*8 for y in range(8)]

for i in range (0,8) :
    lcs[0][i]=0
    lcs[i][0]=0
    
    
    
for i in range (1,8) :
    for j in range (1,8) :
        if (s1[i-1]==s2[j-1]) :
            lcs[i][j]=lcs[i-1][j-1]+1
        else :
            lcs[i][j]=max(lcs[i-1][j],lcs[i][j-1])
            
            
print(lcs[7][7])