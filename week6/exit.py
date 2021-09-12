import sys

if len(sys.argv)!=2:
    print("Too many arguments or missing command-line argument")
    sys.exit(1)

print(f"hello, {sys.argv[1]}")
sys.exit(0)