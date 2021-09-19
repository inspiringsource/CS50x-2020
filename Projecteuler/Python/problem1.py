import math

rsum=0


for i in range(1, 1000):

    if i%3 == 0:
        #print(f"{i} is multiples of 3")
        rsum= rsum + i
    
    elif i%5 ==0:
        #print(f"{i} is multiples of 5")
        rsum= rsum + i
    
#print(f"The sum of these multiples is {rsum}")
print(f"The sum of all the multiples of 3 or 5 below 1000 is {rsum}")
#output: The sum of all the multiples of 3 or 5 below 1000 is 233168