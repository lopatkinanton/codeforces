#include <iostream>
#include <string>

int main() {
    int t = 0;
    std::cin >> t;
    for (int iTest = 0; iTest < t; iTest += 1) {
        int n = 0;
        std::cin >> n;
        char c;
        std::cin >> c;
        std::string s;
        std::cin >> s;
        s = s + s;
        int l = 0;
        int r = 0;
        int ans = 0;
        while (l < 2 * n && r < 2 * n) {
            if (s[l] == c) {
                if (s[r] == 'g') {
                    ans = std::max(ans, r - l);
                    l = r + 1;
                    r += 1;
                }
                else {
                    r += 1;
                }
            }
            else {
                l += 1;
            }
        }
        std::cout << ans << '\n';
    }
}