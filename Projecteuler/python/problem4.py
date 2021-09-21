import sys
import math

answers=[]
prime_sum = 1
target = 9009
print("Answer: ", end='')

#for i in range(10, 100):
#for i in range(100, 10, -1):
#for i in range(1000, 100, -1):
for i in range(100, 1001):
    if target % i == 0:
        print(i, end='; ')
        answers.append(i)
print()
sum_palindrome = answers[-1] * answers[-2]
print(f"The largest palindrome are {answers[-1]} x {answers[-2]} = {sum_palindrome}")

#output: Answer: 71; 839; 1471; 6857; are prime factors of: 600851475143