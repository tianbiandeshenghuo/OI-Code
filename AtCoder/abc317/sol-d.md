# 题意简述
[更好的阅读体验](https://www.luogu.com.cn/blog/tianbiandeshenghuo11/solution-at-abc317-d)

[洛谷题目传送门](https://www.luogu.com.cn/problem/at_abc317_d)

[AtCoder 题目传送门](https://atcoder.jp/contests/abc317/tasks/abc317_d)

Takahashi 和 Aoki 正在竞选。

一共有 $n(1\le n\le 100)$ 个选区，每个选区有 $x_i(1\le x_i\le 10^9)$ 个选民支持 Takahashi，$y_i(1\le y_i\le 10^9)$ 个选民支持 Aoki。如果其中一人在这个选区的支持者比另一个人多，那么他将获得 $z_i(\sum^n_{i+1}z_i\le10^5)$ 点威望。

最终威望值更大的人将竞选成功。

现在，因为 Takahashi 的支持者不够多。所以他想知道：至少还要多少个选民放弃支持 Aoki 而支持 Takahashi 他才能竞选成功。

# 分析
本题是一道背包 DP 题。

下记 $\sum^n_{i+1}z_i$ 为 $p$。

我们记 $dp_{i,j}$ 表示 Takahashi 在前 $i$ 个选取获得 $j$ 点威望值需要的最小增加选民数量。

那么就有 $dp_{i + 1,j+z_i}=\min\{dp_{i,j}+\max(0, \left\lfloor\dfrac{(y_i-x_i+1)}{2}\right\rfloor)\}$。

因为数据范围保证 $n\le 100$，$p\le 10^5$，所以做法可以通过。

但同时，也可以进行一些小优化。

不难发现当前能进行转移的有效状态只有 $\sum^i_{j=1}z_j$ 个。所以我们转移只需要枚举 $1\sim\sum^i_{j=1}z_j$ 即可。

最后答案就是 $\min^p_{j=\left\lfloor\frac{p+1}{2}\right\rfloor}\{dp_{n+1,j}\}$ 。

时间复杂度：$O(n\times \sum^n_{i=1} z_i)$。

空间复杂度：$O(n\times \sum^n_{i=1} z_i)$。
# Code
```cpp
#include<bits/stdc++.h>

using namespace std;
const int MAXN = 1e2 + 5, MAXV = 1e5 + 5;
int n, m;
long long dp[105][MAXV];
struct Node{
  int x, y, z;
} a[MAXN];
int main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> n;
  int sum = 0;
  long long cnt = 2e18;
  for (int i = 1; i <= n; i++){
    cin >> a[i].x >> a[i].y >> a[i].z;
    sum += a[i].z;
    for (int j = 0; j <= sum; j++){
      dp[i][j] = 2e18;
    }
  }
  for (int j = 0; j <= sum; j++){
    dp[n + 1][j] = 2e18;
  }
  sum = 0;
  dp[1][0] = 0;
  for (int i = 1; i <= n; i++){
    sum += a[i].z;
    long long tmp = max(0, (a[i].y - a[i].x + 1) / 2);
    for (int j = 0; j <= sum; j++){
      dp[i + 1][j + a[i].z] = min(dp[i + 1][j + a[i].z], dp[i][j] + tmp);
      dp[i + 1][j] = min(dp[i + 1][j], dp[i][j]);
    }
  }
  int p = sum;
  sum = (sum + 1) / 2;
  for (int i = sum; i <= p; i++){
    cnt = min(cnt, dp[n + 1][i]);
  }
  cout << cnt;
  return 0;
}
```