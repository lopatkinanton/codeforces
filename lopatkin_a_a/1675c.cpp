#include <iostream>
#include <string>

int main() {
    int t = 0;
    std::cin >> t;
    for (int iTest = 0; iTest < t; iTest += 1) {
        std::string s;
        std::cin >> s;
        int r = s.size() - 1;
        for (int i = 0; i < s.size(); i += 1) {
            if (s[i] == '0') {
                r = i;
                break;
            }
        }
        int l = 0;
        for (int i = s.size() - 1; i >= 0; i -= 1) {
            if (s[i] == '1') {
                l = i;
                break;
            }
        }
        std::cout << r - l + 1 << '\n';
    }
}