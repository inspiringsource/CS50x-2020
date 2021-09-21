i = 1
answer = []

while True:
    if all(map(lambda x: i % x ==0, range(2, 20))):
        answer.append(i)

    i=1+i
    if len(answer)>0:
        break

print(answer)