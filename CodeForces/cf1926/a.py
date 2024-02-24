t = int(input())
for _ in range(t):
    s = input()
    a = 0
    b = 0
    n = len(s)
    for i in range(n):
        if (s[i] == 'A'):
            a += 1
        else:
            b += 1
    if (a > b):
        print('A')
    else:
        print('B')