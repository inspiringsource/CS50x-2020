import sys
import math


prime_sum = 1
target = int(input("What is the largest prime factor of: "))
print("Answer: ", end='')
#the range should exclude 1 to the largest integer in the equation (our target)
for i in range(2, target):
    if target % i == 0:
        print(i, end=' ')
      
        prime_sum = prime_sum * i

        if prime_sum == target:
            print("are prime factors of:", prime_sum)
            sys.exit()

#output: Answer: 71 839 1471 6857 are prime factors of: 600851475143