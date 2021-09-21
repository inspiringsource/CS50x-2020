import sys


result=[]


for i in range(7):

    i = i+1
    print(f"i={i}")
    for x in range(10**1000):

        x=x+1
        if x%i == 0 and x%(i+1) == 0 and x%(i+2) == 0 and x%(i+3) == 0:
            print(x)
            break
 


