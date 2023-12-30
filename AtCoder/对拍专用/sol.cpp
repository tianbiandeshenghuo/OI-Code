#include <vector>
#include <iostream>
#include <algorithm>

int main() {
	freopen("t.in", "r", stdin);
	freopen("t.ans", "w", stdout);
    int n;
    std::cin >> n;

    std::vector<int> a(n + 1), pre(n + 2), post(n + 1);
    for (int i = 1; i <= n; ++i) {
        std::cin >> a[i];
    }

    pre[1] = a[1];
    for (int i = 2; i <= n; ++i) {
        pre[i] = pre[i - 1] & a[i];
    }

    post[n] = a[n];
    for (int i = n - 1; i >= 1; --i) {
        post[i] = post[i + 1] & a[i];
    }

    int ans = 1;
    for (int i = 1; i < n; ++i) {
        if (pre[i] + post[i] == pre[n]) {
            ++ans;
        }
    }

    std::cout << ans << '\n';

    return 0;
}
