#include <iostream>
#include <string>

int main() {
    int t = 0;
    std::cin >> t;
    for (int iTest = 0; iTest < t; iTest += 1) {
        std::string s;
        std::cin >> s;
        int len = s.size();
        s.push_back(' ');
        int cur = 1;
        std::string ans = "YES";
        for (int i = 0; i < len; i += 1) {
            if (s[i] == s[i + 1])
                cur += 1;
            else {
                if (cur == 1) {
                    ans = "NO";
                    break;
                }
                cur = 1;
            }
        }
        std::cout << ans << '\n';
    }
    return 0;
}