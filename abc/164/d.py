s = str(input())
numbers = []
current_num = 2019

while current_num < 200000:
    numbers.append(str(current_num))
    current_num += 2019

ans = 0

for i in range(len(s)+1):
    for j in range(i+3, len(s)+1):
        focus = s[i:j]
        if focus in numbers:
            ans += 1

print(ans)