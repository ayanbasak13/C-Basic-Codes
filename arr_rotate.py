#code
N= int()
A=[1,2,3,4,5,6]
ctr=0

'''for i in range(0,N):
    p=input()
    A.append(p)'''


def rotBYone(a,n) :
    a=a[5:] + a[:5]
    return a
    
def deleteKth(b,k) :
    arr=[]
    l=len(b)
    for i in range (0,l) :
        if(i!=(l-k)) :
            arr.append(b[i])
    b=arr
    return b
    
    
def wrapper(A,N) :
    ctr = ctr+1
    A=rotBYone(A,N)
    A=deleteKth(A,ctr)
    return A
    
if(len(A)>1) :
    A=wrapper(A,N)
    
    
print(A)