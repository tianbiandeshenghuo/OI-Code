#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int countLuckyElements(vector<int>& p) {
    int n = p.size();
    vector<int> lucky(n, 0);
    unordered_set<int> seen;

    // 计算每个元素是否为幸运的
    for (int i = n-1; i >= 0; i--) {
        seen.insert(p[i]);

        bool isLucky = true;
        for (int j : seen) {
            if (j > p[i]) {
                isLucky = false;
                break;
            }
        }

        if (isLucky) {
            lucky[i] = 1;
        }
    }

    // 统计幸运元素的数量
    int count = 0;
    for (int i = 0; i < n; i++) {
        count += lucky[i];
    }

    return count;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        
        vector<int> p(n);
        for (int i = 0; i < n; i++) {
            cin >> p[i];
        }

        int luckyCount = countLuckyElements(p);
        cout << luckyCount << endl;
    }

    return 0;
}
