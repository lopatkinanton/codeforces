#include <iostream>
#include <vector>

int main() {
    int t = 0;
    std::cin >> t;
    for (int iTest = 0; iTest < t; iTest += 1) {
        int n = 0;
        std::cin >> n;
        std::vector <int> a(n);
        for (int i = 0; i < n; i += 1)
            std::cin >> a[i];
        int s = 0;
        for (int i = 0; i < n; i += 1) {
            if (a[i] == 0) {
                s = i - 1;
                break;
            }
        }
        int f = 0;
        for (int i = n - 1; i >= 0; i -= 1) {
            if (a[i] == 0) {
                f = i + 1;
                break;
            }
        }
        std::cout << f - s << '\n';
    }
}