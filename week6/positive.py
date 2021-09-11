from cs50 import get_int


def main():
    i = get_positive_int()
    print(i)


def get_positive_int():
    while True:
        n = get_int("Positive Int: ")
        if n > 0:
            break
    return n


main()
