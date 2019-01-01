
A=[1,3,5,7,9]
B=[1,1,1,1,1]



left=[0]*5
right=[0]*5

    
c=0;    


left[0] = 1
right[4] = 1

for i in range(1,5) :
    left[i] = left[i-1] * A[i-1]
    
for j in range (3,-1,-1) :
    #print(j)
    right[j] = right[j+1] * A[j+1]
    
for i in range(0,5) :
    B[i] = left[i] * right[i]
    
    
'''print(left)
print(right)'''
    
print(B)