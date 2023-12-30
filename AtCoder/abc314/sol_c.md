# 题意简述
[更好的阅读体验](https://www.luogu.com.cn/blog/tianbiandeshenghuo11/solution-at-abc314-c)

[AtCoder 原题面](https://atcoder.jp/contests/314/tasks/abc314_c)

[洛谷原题面](https://www.luogu.com.cn/problem/at_abc314_c)

给定长度为 $N$ 的小写英文字母字符串 $S$。$S$ 中的每个字符被染了 $M$ 种颜色之一，颜色编号为 $1 \sim M$，第 $i$ 个字符染了颜色 $C_i$。

对于 $i = 1,2,\dots, M$，按如下操作：对颜色为 $i$ 的所有字符循环右移一位。

请你求出最终的 $S$。数据保证每种颜色至少有一个字符。
# 分析
这题我觉得是比较简单的。

读入每个颜色，用 `std::vector` 存储每个颜色对应的下表。

因为保证每种颜色至少有一个字符，所以不用考虑 `std::vector` 为空的情况。

然后对于每个颜色扫一遍 `std::vector`，变换即可。

时间复杂度：$O(N)$。

空间复杂度：$O(N)$。

# Code
```cpp
#include<bits/stdc++.h>

using namespace std;
const int MAXN = 2e5 + 5;
int n, m, a[MAXN];
string s;
vector<int> b[MAXN];
int main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> n >> m;
  cin >> s;
  s = ' ' + s;
  for (int i = 1; i <= n; i++){
    cin >> a[i];
    b[a[i]].push_back(i);
  }
  for (int i = 1; i <= m; i++){
    char p = s[b[i][b[i].size() - 1]];
    for (int j = b[i].size() - 1; j >= 1; j--){
      s[b[i][j]] = s[b[i][j - 1]];
    }
    s[b[i][0]] = p;
  }
  cout << s;
  return 0;
}
```