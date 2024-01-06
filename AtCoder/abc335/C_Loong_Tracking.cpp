#include <bits/stdc++.h>
#define int long long

using namespace std;
const int MAXN = 1e7 + 5;
int read(){
  int x;
  cin >> x;
  return x;
}
int n = read(), q = read();
int head = 1e6 + 1, tail = 1e6 + n;
struct Node{
  int x, y;
}p[MAXN];
Node get(Node x,char c){
	if(c == 'U'){
    x.y++;
  }else if(c=='L') {
    x.x--;
  }else if(c=='R'){
    x.x++;
  }else {
    x.y--;
  }
  return x;
}
signed main(){
  for(int i = head; i <= tail; i++) {
    p[i] = Node{i - (int)1e6, 0};
  }
  while(q--){
		int op = read();
		if(op == 1){
			char c;
			cin >> c;
			p[head - 1] = get(p[head], c);
			head--, tail--;
		}else{
			int k = read();
      cout << p[head + k - 1].x << ' ' << p[head + k - 1].y << '\n';
		}
	}
  return 0;
}