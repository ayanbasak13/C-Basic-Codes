
dict={1:'A',2:'B',3:'C',4:'D',5:'E',6:'F',7:'G',8:'H',9:'I',10:'J',11:'K',12:'L',13:'M',14:'N',15:'O',16:'P',17:'Q',18:'R',19:'S',20:'T',21:'U',22:'V',23:'W',24:'X',25:'Y',26:'Z'}

T=int(input())
for i in range (0,T) :
    N=int(input())
    lis=[]   
    lis1=[]
    def key(n):
        #print(1)
        if(n>0) :
            k=int(n/26)
            p=n%26
            if (k>0) and (k<=26) :
                if(p>0) :
                    lis.append(p)
                lis.append(k)
            else :
                if(p>0) :
                    lis.append(p)
                key(k)
            
                
            
            '''k=int(n%26)
            if(k==0):
                k=1
                lis.append(k)
            else:
                lis.append(k)
            p=int(n/26)
            key(p)'''
            
        return lis
        
    liss=key(N)
            
    
    
    l=len(liss)-1
    def app(lis,L):
        if(L>=0):
            lis1.append(lis[L])
            L=L-1
            app(lis,L)
            return lis1
        
    lis2=app(liss,l)
        
    for j in range (0,len(lis2)):
        if(j==len(lis2)-1):
            print(dict[lis2[j]], end="", flush=True)
            print("\n")
        else :
            print(dict[lis2[j]], end="", flush=True)