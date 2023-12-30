s = input()
n = len(s)
i = 1
while (i < n):
    if (s[i] == '1'):
        print("No")
        exit(0)
    i += 2
print("Yes")