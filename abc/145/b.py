n = int(input())
s = input()
if n%2 != 0:
  print("No")
else:
  yes = True
  for i in range(0, n//2):
    if s[i] == s[i+n//2]:
      pass
    else:
      yes = False
  if yes:
    print("Yes")
  else:
    print("No")