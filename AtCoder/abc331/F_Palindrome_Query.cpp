#include <iostream>
#include <vector>
using namespace std;

// 树状数组
struct FenwickTree {
    vector<int> BIT;
    int size;

    FenwickTree(int n) {
        BIT.resize(n + 1, 0);
        size = n;
    }

    void update(int idx, int val) {
        for (; idx <= size; idx += idx & -idx) {
            BIT[idx] += val;
        }
    }

    int query(int idx) {
        int sum = 0;
        for (; idx > 0; idx -= idx & -idx) {
            sum += BIT[idx];
        }
        return sum;
    }

    int queryRange(int l, int r) {
        return query(r) - query(l-1);
    }
};

bool checkPalindrome(vector<int>& prefixSum, vector<int>& suffixSum, int l, int r) {
    int N = prefixSum.size() - 1;
    int sum1 = prefixSum[r] - prefixSum[l-1];
    int sum2 = suffixSum[N-l+1] - suffixSum[N-r];
    return sum1 == sum2;
}

int main() {
    int N, Q;
    cin >> N >> Q;
    
    string S;
    cin >> S;
    
    vector<int> prefixSum(N+1, 0);
    vector<int> suffixSum(N+1, 0);
    vector<bool> isPalindrome(N+1, false);
    FenwickTree ft(N);
    
    // 计算前缀和
    for (int i = 1; i <= N; i++) {
        prefixSum[i] = prefixSum[i-1] + S[i-1];
    }
    
    // 计算后缀和
    for (int i = N; i >= 1; i--) {
        suffixSum[i] = suffixSum[i+1] + S[i-1];
    }
    
    // 处理查询操作
    for (int i = 0; i < Q; i++) {
        int type, x, l, r;
        char c;
        cin >> type;
        
        if (type == 1) {
            cin >> x >> c;
            ft.update(x, c - S[x-1]);
            S[x-1] = c;
        } else if (type == 2) {
            cin >> l >> r;
            if (r - l + 1 <= 2) {
                cout << "是" << endl;
            } else {
                if (checkPalindrome(prefixSum, suffixSum, l, r)) {
                    cout << "是" << endl;
                } else {
                    cout << "否" << endl;
                }
            }
        }
    }
    
    return 0;
}
