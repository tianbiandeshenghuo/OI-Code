# 题意简述
[更好的阅读体验](https://www.luogu.com.cn/blog/tianbiandeshenghuo11/solution-at-abc314-d)

[AtCoder 原题面](https://atcoder.jp/contests/314/tasks/abc314_d)

[洛谷原题面](https://www.luogu.com.cn/problem/at_abc314_d)

给定长度为 $N$ 的大小写英文字符串 $S$，下标分别为 $1,2,3,\dots,N$。有 $Q$ 次操作，第 $i$ 次操作给定三元组 $(t_i, x_i, c_i)$，$t_i, x_i$ 是整数，$c_i$ 是字符，然后进行如下操作：

1. 如果 $t_i = 1$，则将 $S$ 的第 $x_i$ 个字符变为 $c_i$。
2. 如果 $t_i = 2$，则将 $S$ 中的所有大写字母变成小写字母。
3. 如果 $t_i = 3$，则将 $S$ 中的所有小写字母变成大写字母。

输出最终的 $S$。
# 分析
首先考虑暴力的做法：每次读入，如果 $t_i=1$，则直接修改。否则遍历整个字符串，根据 $t_i$ 更新每个字符。

但这样的时间复杂度是 $O(N\times Q)$ 的，会超时。

不难发现，如果操作是类似这样的：
```plain
2 0 a
1 1 a
1 1 a
.
.
.
3 0 a
```

那么第一次进行的修改操作，在很多次之后被覆盖。

所以，我们前面进行的很多操作都是无用的。

事实上，最后的字符串 $S$ 的大小写变换只和最后一次操作 $2$ 和操作 $3$ 有关。

但同时，如果我们直接最后全部更新是有误的。

如果有类似这样的样例：
```plain
5
abcde
6
3 0 a
1 1 a
1 2 b
1 3 c
1 4 d
1 5 e
```
答案应该是 `abcde`。但如果按照刚才的思路去写，输出的将是 `ABCDE`。

所以我们就可以发现，最后一次操作 $2$、$3$ 只会影响在此之前进行的操作 $1$ 和未进行操作位置的字符。

那么，我们记录最后一次操作 $2$、$3$ 是 $2$ 还是 $3$ 和其对应第几次操作（下记其为 $p$），每个字符的最后一次操作 $1$ 是第几次操作（下记其为 $q_{x_i}$）。

每次操作 $1$ 都直接更新。

最后扫一遍字符串，看是否满足 $q_i\le p$。是就按照最后一次操作更新大小写即可。

时间复杂度：$O(N+Q)$。

空间复杂度：$O(N)$。
# Code
```cpp
#include<bits/stdc++.h>

using namespace std;
const int MAXN = 5e5 + 5;
int n, m, x, y;
string s;
int cg[MAXN];
int f = -1, op = -1;
int main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> n >> s >> m;
  s = ' ' + s;
  for (int i = 1; i <= m; i++){
    int a, b;
    char p;
    cin >> a >> b >> p;
    if (a == 1){
      s[b] = p;
      cg[b] = i;
    }else if (a == 2){
      f = 0;
      op = i;
    }else {
      f = 1;
      op = i;
    }
  }
  for (int i = 1; i <= n; i++){
    if (cg[i] <= op){
      if (f && 'a' <= s[i] && s[i] <= 'z'){
        s[i] += 'A' - 'a';
      }else if (f == 0 && 'A' <= s[i] && s[i] <= 'Z'){
        s[i] += 'a' - 'A';
      }
    }
  }
  cout << s;
  return 0;
}
```