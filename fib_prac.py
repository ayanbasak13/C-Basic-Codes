fib=[]

for i in range(0,10) :
    fib.append(0)
    
fib[0] = 0
fib[1] = 1

for i in range (2,10) :
    fib[i] = fib[i-1] + fib[i-2]
    
print(fib)