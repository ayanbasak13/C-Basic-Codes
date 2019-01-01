T=int(input())

for i in range (0,T) :
     N=int(input())
     s=input()
     arr=[]
     ctr=0
     arr=list(map(int,s.split(" ")))
     
     def lis(arr) :
         n=len(arr)
         lis=[1]*n
        
         if(n==1) :
             return 1
         for i in range(1,n) :
             for j in range (0,i) :
                 if (arr[i]>arr[j]) :    # and (lis[i]<lis[j]+1)) :
                     lis[i] = max(lis[i],1 + lis[j])
                     
         maximum=0
         for l in range (0,len(lis)) :
             maximum=max(maximum,lis[l])
         return maximum
         
         
     a=lis(arr)
     print(a)               