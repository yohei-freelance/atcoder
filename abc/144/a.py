a, b = input().split(' ')
a, b = int(a), int(b)
if 1 <= a and a <= 9:
  if 1 <= b and b <= 9:
    print(a*b)
  else:
    print(-1)
else:
  print(-1)