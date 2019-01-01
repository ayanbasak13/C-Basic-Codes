s='I had my birthday before my friend had his birthday'

arr=s.split(" ")
l=len(arr)

a={}

for i in range (0,l) :
    a[arr[i]] = 0
    
for i in range (0,l) :
    if arr[i] in a.keys() :
        a[arr[i]] +=1


#First Occurence        
for i in a.keys() :
    if a[i]==2 :
        print(i)
        break
    
    
    
lis=[]   
#Last Occurence
for i in a.keys() :
    if a[i]==2 :
        lis.append(i)
        
print(lis[-1])


