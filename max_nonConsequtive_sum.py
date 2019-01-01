# Enter your code here. Read input from STDIN. Print output to STDOUT

T=int(input())

for i in range (0,T) :
     N=int(input())
     A=[]
     s=input()
     A=list(map(int,s.split()))
     maximum=0
     sum1=[]
     
     for i in range (0,N) :
         sum1.append(0)
     if(N==0) :
          maximum=0
     elif (N==1) :
          maximum=A[0]
     elif (N==2) :
          maximum = max(A[0],A[1])
     else :
          sum1[0]=A[0]
          sum1[1]=A[1]
          for i in range (2,N) :
              temp1=0
              temp2=0
              tempsum=0
              for j in range (i-2,0,-2) :
                  temp1+=A[j]
              for k in range (i-3,0,-2) :
                  temp2+=A[k]       
              if (temp1>temp2) :
                  for z in range (i-2,0,-2) :
                      tempsum+=A[z]
                  A[i]+=tempsum
              else :
                  for z in range (i-3,0,-2) :
                      tempsum+=A[z]
                  A[i]+=tempsum        
                       
                  
                  
                  
     for k in range (0,N) :
          if (A[k]>maximum) :
               maximum=A[k]
               
     print(maximum)