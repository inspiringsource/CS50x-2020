import sys
import math


prime_sum = 1
target = 9009
print("Answer: ", end='')

#for i in range(10, 100):
#for i in range(100, 10, -1):
#for i in range(1000, 100, -1):
for i in range(100, 1000):
    if target % i == 0:
        print(i, end='; ')
      
        prime_sum = prime_sum * i
        
        print(prime_sum)
        # if prime_sum>target:
        #     prime_sum=1
        
        if prime_sum == target:
            print("are prime factors of:", prime_sum)
            sys.exit()

#output: Answer: 71; 839; 1471; 6857; are prime factors of: 600851475143