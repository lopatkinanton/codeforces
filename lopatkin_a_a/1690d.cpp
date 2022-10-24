#include <iostream>
#include <string>

int main() {
    int t = 0;
    std::cin >> t;
    for (int iTest = 0; iTest < t; iTest += 1) {
        int n = 0;
        int k = 0;
        std::cin >> n >> k;
        std::string s;
        std::cin >> s;
        int w = 0;
        for (int i = 0; i < k; i += 1) {
            if (s[i] == 'W') {
                w += 1;
            }
        }
        int ans = w;
        int r = k;
        while (r < n) {
            if (s[r] == 'W' && s[r - k] == 'B') {
                w += 1;
            }
            if (s[r] == 'B' && s[r - k] == 'W') {
                w -= 1;
            }
            ans = std::min(ans, w);
            r += 1;
        }
        std::cout << ans << '\n';
    }
}