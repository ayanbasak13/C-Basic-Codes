
def app(a,p) :
    arr1=[]
    arr1=arr1.append(a[p])
    print(arr1)
    p=p-1
    if(p>=0):
        app(a,p)
    return arr1




def disp(b) :        
    for j in range (0,len(b)):
        if(j<len(b)):
            print(b[j]+".")
        else:
            print(b[j])
            
        
s=input()
b=[]
arr=s.split(".")
k=len(arr)-1
c=app(arr,k)
disp(c)
    
        
        
        
