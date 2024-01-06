def Solve():
    n, k, x = [int(x) for x in input().split()]
    if ((1 + k) * k / 2 <= x and x <= k * (n + n - k + 1) / 2):
        print("yes")
    else:
        print("no")

t = int(input())
for _ in range(t):
    Solve();