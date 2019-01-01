T=int(input())

for i in range (0,T) :
     N=int(input())
     s=input()
     arr=[]
     ctr=0
     arr=list(map(int,s.split(" ")))
     
     def lonediff_consequtive_sub(arr) :
         n=len(arr)
         lis = [1]*n
         
         if(n==1) :
             return 1
         
         for i in range (1,n) :
             for j in range (0,i) :
                 if((arr[j+1]-arr[j])==1) :    ###if sequence has to be taken consequtively
                         lis[j+1] = max(lis[i],1+lis[j])

         print(lis)
                     
         maximum=0
         for l in range (0,len(lis)) :
             maximum=max(maximum,lis[l])
         return maximum
         

     a = lonediff_consequtive_sub(arr)
     print(a)         