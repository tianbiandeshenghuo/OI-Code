def check(x):
  if (x < 10):
    return 0;
  i = 2
  while (i * i <= x):
    if (x % i == 0):
      return 0;
    i += 1
  return 1
def dfs(x, cnt, s):
  if (x == 9):
    if (check(cnt)):
      return cnt
    return 0
  q = dfs(x + 1, cnt * 10 + ord(s[x]) - ord('0'), s);
  if (q):
    return q
  return dfs(x + 1, cnt, s);
def Solve():
  s = input()
  print(dfs(0, 0, s))

t = int(input())
while (t):
  t -= 1
  Solve();