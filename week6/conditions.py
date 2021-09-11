from typing import get_origin
#from cs50 import get_int
import cs50

x=cs50.get_int("x: ") #namespacing
y=cs50.get_int("y: ")

if x < y:
    print("x is less than y")

elif x>y:
    print("x is greater than y")

else:
    print("Equal!")
