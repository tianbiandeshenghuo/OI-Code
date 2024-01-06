#include <iostream>
#include <unordered_map>
#include <vector>
#include <stack>
using namespace std;

class Array {
private:
    vector<int> arr; // 存储数组元素
    unordered_map<int, int> count; // 记录不同数字的数量
    stack<pair<char, int>> history; // 记录操作历史
    int distinctCount; // 当前数组中不同数字的数量

public:
    Array() {
        distinctCount = 0;
    }

    void add(int x) {
        if (count.find(x) == count.end()) {
            count[x] = 1;
            distinctCount++;
        } else {
            count[x]++;
        }
        arr.push_back(x);
        history.push({'+', x});
    }

    void remove(int k) {
        while (k > 0 && !arr.empty()) {
            int x = arr.back();
            arr.pop_back();
            count[x]--;
            if (count[x] == 0) {
                count.erase(x);
                distinctCount--;
            }
            history.push({'-', x});
            k--;
        }
    }

    void rollback() {
        while (!history.empty()) {
            char type = history.top().first;
            int value = history.top().second;
            history.pop();

            if (type == '+') {
                if (!arr.empty()) {
                    int x = arr.back();
                    arr.pop_back();
                    count[x]--;
                    if (count[x] == 0) {
                        count.erase(x);
                        distinctCount--;
                    }
                }
            } else if (type == '-') {
                for (int i = 0; i < value; i++) {
                    if (!arr.empty()) {
                        int x = arr.back();
                        arr.pop_back();
                        if (count.find(x) == count.end()) {
                            count[x] = 1;
                            distinctCount++;
                        } else {
                            count[x]++;
                        }
                    }
                }
            } else {
                break; // 停止回滚，遇到非'!'操作
            }
        }
    }

    int getDistinctCount() {
        return distinctCount;
    }
};

int main() {
    Array array;
freopen("t.in", "r", stdin);
    int q;
    cin >> q;

    while (q--) {
        char type;
        cin >> type;

        if (type == '+') {
            int x;
            cin >> x;
            array.add(x);
        } else if (type == '-') {
            int k;
            cin >> k;
            array.remove(k);
        } else if (type == '!') {
            array.rollback();
        } else if (type == '?') {
            cout << array.getDistinctCount() << '\n';
        }
    }

    return 0;
}