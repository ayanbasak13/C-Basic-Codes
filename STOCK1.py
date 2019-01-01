#code
T=int(input())

for i in range (0,T) :
    arr=[]
    N=int(input())
    s=input()
    arr=list(map(int,s.split()))
    ctr=0

    def func(cnt) :
        if(arr[cnt] > arr[cnt+1]) :
            cnt=cnt+1
            if (cnt<N) :
                print(cnt)
                if(arr[cnt]<arr[cnt-1] and arr[cnt]<arr[cnt+1]) :
                    low=cnt
                    print(" ("+str(low))
                    while((arr[cnt]<arr[cnt+1]) and (cnt<N)) :
                        cnt=cnt+1
                    high=cnt
                    print(" "+str(high)+")")
                    if(cnt<N) :
                        func(cnt)
        else :
            if(arr[cnt] < arr[cnt+1]) :
                low=cnt
                print("("+str(low),end="",flush=True)
                while(arr[cnt]<arr[cnt+1]) :
                    cnt=cnt+1
                high=ctr
                print(" "+str(high)+")")
                #print(ctr)
                if(cnt<N) :
                    cnt+=1
                    func(cnt)
                        
    if(arr[ctr] < arr[ctr+1]) :
        low=ctr
        print("("+str(low),end="",flush=True)
        while(arr[ctr]<arr[ctr+1]) :
            ctr=ctr+1
        high=ctr
        print(" "+str(high)+")")
        #print(ctr)
        if(ctr<N) :
            ctr+=1
            func(ctr)
        
        
        
    else :
            func(ctr)