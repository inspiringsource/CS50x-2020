from sys import argv

# if len(argv)==2:
#     print(f"hello, {argv[1]}") #argv[0] name of the program running

# else:
#     print("Hello, world")

a=[]
for arg in argv:
    a.append(arg)

print(a[1])