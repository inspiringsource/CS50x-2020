from os import close


words = set()


def check(word):
    if word.lower() in words:
        return True
    else:
        return False


def load(dictionary):
    file = open(dictionary, "r")
    for line in file:
        words.add(line.rstrip())
    file.close()
    return True


def size():
    return len(words)


def unload():
    return True
