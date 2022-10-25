#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int t = 0;
    std::cin >> t;
    for (int iTest = 0; iTest < t; iTest += 1) {
        int n = 0;
        std::cin >> n;
        int k = 0;
        std::vector <int> d(n);
        for (int i = 0; i < n; i += 1) {
            int a = 0;
            std::cin >> a;
            while (a % 2 == 0) {
                k += 1;
                a /= 2;
            }
            int r = i + 1;
            while (r % 2 == 0) {
                d[i] += 1;
                r /= 2;
            }
        }
        int ans = 0;
        if (k < n) {
            sort(d.rbegin(), d.rend());
            for (int i = 0; i < n; i += 1) {
                k += d[i];
                ans += 1;
                if (k >= n) {
                    break;
                }
            }
        }
        if (k < n) {
            std::cout << -1 << '\n';
        }
        else {
            std::cout << ans << '\n';
        }
    }
}
