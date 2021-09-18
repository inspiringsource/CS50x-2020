import sys

fsum=0
term = 1000
i = 0
n1=0
n2=1

while i < term:
    
    n3 = n1+n2
    #print(n3)
    n1=n2
    n2=n3
    i=i+1
    
    if (n3)%2==0:
        fsum=n3+fsum
        print(fsum)
    if n3 >= 4000000:
        sys.exit(1)
