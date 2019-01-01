lis=['123','456','12345','1237895','913','1567298435']
li=[]

for i in lis:
    if (('1' in i) and ('2' in i) and ('3' in i)) :
        li.append(i)
        
print(li)