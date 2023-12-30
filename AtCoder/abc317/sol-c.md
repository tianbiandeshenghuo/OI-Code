# 题意简述
[更好的阅读体验](https://www.luogu.com.cn/blog/tianbiandeshenghuo11/solution-at-abc317-c)

[洛谷题目传送门](https://www.luogu.com.cn/problem/at_abc317_c)

[AtCoder 题目传送门](https://atcoder.jp/contests/abc317/tasks/abc317_c)

给定 $n$ 个点和 $m$ 条边。每条边连接点 $a_i$ 和 $b_i$，长度为 $c_i$。

请你选择任意一个点作为起点，在不重复经过点的情况下，求出此时会走过的道路的最长长度。

# 分析
本题就是道暴力。

对于每一个点都跑一边 DFS，边走边更新答案，最后输出最大值即可。

时间复杂度：$O(n^2 +m)$

空间复杂度：$O(n)$。

# Code
```cpp
#include<bits/stdc++.h>

using namespace std;
const int MAXN = 15;
int n, m;
long long ans = 0;
struct Node{
  int x, v;
};
vector<Node> a[MAXN];
bool vis[MAXN];
void dfs(int x, long long cnt){
  if (vis[x]){
    return ;
  }
  ans = max(ans, cnt);
  vis[x] = 1;
  for (auto v : a[x]){
    dfs(v.x, cnt + v.v);
  }
  vis[x] = 0;
}
int main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> n >> m;
  while (m--){
    int u, v, w;
    cin >> u >> v >> w;
    a[u].push_back({v, w});
    a[v].push_back({u, w});
  }
  for (int i = 1; i <= n; i++){
    dfs(i, 0);
  }
  cout << ans;
  return 0;
}
```