#include <iostream>
#include <vector>

int main() {
    int t = 0;
    std::cin >> t;
    for (int iTest = 0; iTest < t; iTest += 1) {
        int n = 0;
        std::cin >> n;
        std::vector <int> a(n);
        int k0 = 0;
        int f = 0;
        for (int i = 0; i < n; i += 1) {
            std::cin >> a[i];
            if (a[i] == 0)
                k0 += 1;
            else if (!f) {
                for (int j = 0; j < i; j += 1) {
                    if (a[j] == a[i]) {
                        f = 1;
                        break;
                    }
                }
            }
        }
        int ans = 0;
        if (k0 > 0)
            ans = n - k0;
        else if (f)
            ans = n;
        else
            ans = n + 1;
        std::cout << ans << '\n';
    }
}