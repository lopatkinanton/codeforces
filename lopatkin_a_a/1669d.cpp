#include <iostream>
#include <string>

int main() {
    int t = 0;
    std::cin >> t;
    for (int iTest = 0; iTest < t; iTest += 1) {
        int n = 0;
        std::cin >> n;
        std::string s;
        std::cin >> s;
        s = s + "W";
        std::string ans = "YES";
        int r = 0;
        int b = 0;
        for (int i = 0; i <= n; i += 1) {
            if (s[i] == 'R') {
                r += 1;
            }
            if (s[i] == 'B') {
                b += 1;
            }
            if (s[i] == 'W') {
                if (r == 0 && b != 0 || r != 0 && b == 0) {
                    ans = "NO";
                    break;
                }
                r = 0;
                b = 0;
            }
        }
        std::cout << ans << '\n';
    }
}