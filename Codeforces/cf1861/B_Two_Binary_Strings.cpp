#include <iostream>
#include <vector>
#include <string>

bool canStringsBeEqual(const std::string& a, const std::string& b) {
    if (a.length() != b.length()) {
        return false;
    }

    for (int i = 1; i < a.length()-1; i++) {
        if (a[i] != b[i]) {
            if ((a[i-1] == a[i] && a[i] == a[i+1]) || (b[i-1] == b[i] && b[i] == b[i+1])) {
                continue;
            } else {
                return false;
            }
        }
    }

    return true;
}

int main() {
    int t;
    std::cin >> t;

    for (int i = 0; i < t; i++) {
        std::string a, b;
        std::cin >> a >> b;

        if (canStringsBeEqual(a, b)) {
            std::cout << "Yes" << std::endl;
        } else {
            std::cout << "No" << std::endl;
        }
    }

    return 0;
}
