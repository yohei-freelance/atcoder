n = int(input())
voc = {}
for i in range(n):
    tmp = input()
    if tmp not in voc:
        voc[tmp] = 1
    else:
        voc[tmp] += 1
voc = sorted(voc.items())
voc2 = {}
for i in voc:
    voc2[i[0]] = i[1]
for k, v in sorted(voc.items(), key=lambda x: -x[1]):
    if v >= 2:
        print(str(k))