import sys

names= ["Bill", "Charlie", "David", "Ron"]



if sys.argv[1] in names:
    print("Found")
else:
    print("Not found")