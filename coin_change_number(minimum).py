coins=[1,5,6,9]
N=11
l=len(coins)+1


dp=[[0]*(N+1) for x in range (l)]
dp[0][0] = 1


for p in range (1,N+1) :
    dp[0][p] = 0

for p in range (1,l) :
    dp[p][0] = 0
    
    
    
for i in range (1,l) :
    for j in range (1,(N+1)) :
        if j<coins[i-1] :
            dp[i][j] = dp[i-1][j]
        else :
            dp[i][j] = 1+dp[i][j-coins[i-1]]
            
_min=100000

for i in range (1,l) :
    if dp[i][N] < _min :
        _min=dp[i][N]
        
print(dp)
print(_min)