T=int(input())



for t in range (0,T) :
    N=int(input())
    s=input()
    flag=[]
    flag1=[]
    s=s.split(' ')
    s1 = list(set(s))
    for i in range (0,len(s1)) :
        flag.append(0)
        
    for i in range (0,N) :
        for j in range (0,len(s1)) :
            if (s[i]==s1[j]) :
                flag[j]+=1
                
                
    for l in range (0,len(flag)) :
        flag1.append(flag[l]) 
    flag1.sort()
    k=flag1[-2]
    index=0
    for j in range (0,len(flag)) :
        if (flag[j]==k) :
            index=j
            
    print(s1[index])