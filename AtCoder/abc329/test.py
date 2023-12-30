import random as rd
n = int(2)
m = n
print(n, m)
for _ in range(n):
  print(rd.randint(1, m), end = ' ')
print()
for _ in range(m):
  a = rd.randint(1, n)
  b = rd.randint(1, n)
  while (a == b):
    b = rd.randint(1, n)
  print(a, b)