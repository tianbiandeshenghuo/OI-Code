from math import *

lst = 0

def check(x, y):
  a = 0
  b = 0
  while(x):
    a += 1
    x //= 10
  while(y):
    b += 1
    y //= 10
  return a != b

def checkp(x):
  a = 0
  while(x):
    a += 1
    x //= 10
  return a % 2 == 0

def sort(x):
  a = []
  while(x):
    a += [x % 10]
    x //= 10
  a = sorted(a)
  return a
def get(x, cnt):
  x = int(x)
  if (x <= 3):
    return sort(cnt)
  a = []
  for _ in range(x - 3):
    a = a + [0]
  a = a + [1, 6, 9]
  return a
for _ in range(1, 10000000):
  if (checkp(_ * _)):
    continue
  if (check(_ * _, (_ - 1) * (_ - 1))):
    print()
  #print(_ * _, get(log10(_ * _) + 1, _ * _))
  if (sort(_ * _) == get(log10(_ * _) + 1, _ * _)):
    print(sort(_ * _), _, _ * _)