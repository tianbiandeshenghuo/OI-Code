#include <bits/stdc++.h>

using namespace std;
int t, n;
void Solve(){
  cin >> n;
  cout << 1 << ' ';
  int k = n / 2;
  if (n % 2){
    cout << n << ' ';
  }
  for (int i = 2; i <= 2 * k; i <<= 1){
    cout << i << ' ';
  }
  for (int i = 3; i <= 2 * k; i += 2){
    for (int j = i; j <= 2 * k; j <<= 1){
      cout << j << ' ';
    }
  }
  cout << '\n';
}
int main(){
	cin >> t;
	while(t--){
		Solve();
	}
	return 0;
}
