c=[1,2,3,4]
N=4

dp = [[0]*5 for y in range (5)]

dp[0][0]=0
'''for j in range (5) :
    dp[0][j] = 0'''
    
for j in range (5) :
    dp[j][0] = 1
    
for i in range (1,5) :
    for j in range (1,5) :
        dp[i][j] = dp[i-1][j] + dp[i][j-i]
        
print(dp[4][4])