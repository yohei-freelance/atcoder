n = int(input())
booli = True
for i in range(1, 10):
  ans, mod = n/i, n%i
  if mod == 0 and 1<= ans and ans <= 9:
    print("Yes")
    booli = False
    break
if booli:
  print("No")