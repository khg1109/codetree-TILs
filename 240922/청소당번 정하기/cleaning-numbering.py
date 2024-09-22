classroom = 0
corridor = 0
bathroom = 0



n = int(input())



for i in range(n):

    if i == 0:
        continue
    if i % 12 == 0:
        bathroom += 1
    elif i % 3 == 0:
        corridor += 1
    elif i % 2 == 0:
        classroom += 1




print("%d %d %d" % (classroom, corridor, bathroom))