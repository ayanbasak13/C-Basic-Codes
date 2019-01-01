l=[1,2,3,4,5,6,7,8]
b=[1,5,8,9,10,17,17,20]
N=len(l)
_max = 0
dp=[]



for i in range (0,N+1) :
    dp.append(0)
    
            
 
for i in range (1,N+1) :
    for j in range (1,i+1) :
        s=b[j-1] + dp[i-j-1]
        #print(s)
        if(s>_max) :
            _max=s
            print(_max)
    dp[i] = _max