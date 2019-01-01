#  UGLY NUMBERS


ugly=[None] * 150

ugly[0] = 1
i2=0
i3=0
i5=0


next_mulitple_of_2 = ugly[i2] * 2
next_mulitple_of_3 = ugly[i3] * 3
next_mulitple_of_5 = ugly[i5] * 5


for i in range (1,150) :
    next_ugly_no = min(next_mulitple_of_2,next_mulitple_of_3,next_mulitple_of_5)
    ugly[i] = next_ugly_no
        
        
    if (next_ugly_no == next_mulitple_of_2) :
        i2+=1
        next_mulitple_of_2 = ugly[i2]*2
        
    if (next_ugly_no == next_mulitple_of_3) :
        i3+=1
        next_mulitple_of_3 = ugly[i3]*3
        
    if (next_ugly_no == next_mulitple_of_5) :
        i5+=1
        next_mulitple_of_5 = ugly[i5]*5

    