T=int(input())

for i in range (0,T) :
    N=int(input())
    A=input()
    B=input()
    A=A.split(' ')
    B=B.split(' ')
    flag=[]
    l_A=len(A)
    l_B=len(B)
    for k in range (0,N) :
        flag.append(0)
    if (l_A == N) and (l_B == N) :
        for i in range (0,l_A) :
            for j in range (0,l_B):
                if A[i]==B[j] :
                    flag[i]=1
                    break
                else :
                    flag[i]=0
                    
    
    f=1
    for p in range (0,len(flag)) :
        if flag[p]==0 :
            f=0

    if(f==0) :
        print(0)
    else :
        print(1)
        