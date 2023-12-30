#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

using namespace __gnu_pbds;

using namespace std;
//using namespace boost::multiprecision;


#define sp << ' '
#define ll long long
#define ull unsigned long long
#define ld long double
#define endl '\n'
#define MOD 1000000007
#define b_rev boost::adaptors::reverse
#define GV getValue
#define GVI getValue<int>


typedef tree<int, null_type, less<>, rb_tree_tag,
        tree_order_statistics_node_update> ordered_set;

typedef tree<pair<int, int>, null_type, less_equal<>, rb_tree_tag,
        tree_order_statistics_node_update>
        ordered_multiset;

template<class T> using multi_ordered_set = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

template<typename T>
T getValue() {
    T value;
    std::cin >> value;
    return value;
}


void solve();
int uva(int);

bool uv = 0;

int main() {
#ifndef ONLINE_JUDGE
    freopen("out.txt","w" ,stdout);
    freopen("in.txt","r" ,stdin);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    if (!uv) {
        int t = 1;
//        cin >> t;
        while (t--) {
            solve();
        }
    }else{
        while (1) {
            string line;
            getline(cin, line);
            istringstream iss(line);
            int x, y;
            if (iss >> x) {
                uva(x);
            }
            return 0;
        }
    }
}


struct PairComparator {
    bool operator()(const pair<int, int>& p1, const pair<int, int>& p2) const {
        if (p1.first == p2.first) {
            return p1.second <= p2.second; // If first elements are equal, compare second elements.
        }
        return p1.first >= p2.first; // Compare first elements.
    }
};

bool pairComparator(const pair<int, int>& p1, const pair<int, int>& p2) {
    if (p1.first == p2.first) {
        return p1.second <= p2.second; // If first elements are equal, compare second elements.
    }
    return p1.first >= p2.first; // Compare first elements.
}



void solve() {
    cout << 10000 << endl;
    for (int i = 0; i < 10000; ++i) {
        int n = 30;
        cout << n sp << 1 << endl;
        for (int j = 0; j < n-1; ++j) {
            cout << 1000000000 sp;
        }
        cout << 1000000000 << endl;
    }
}

int uva(int n) {
    return 0;
}