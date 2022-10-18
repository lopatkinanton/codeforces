#include <iostream>
#include <vector>

int main() {
    int t = 0;
    std::cin >> t;
    for (int iTest = 0; iTest < t; iTest += 1) {
        int n = 0;
        std::cin >> n;
        std::vector <int> a(n);
        for (int i = 0; i < n; i += 1) {
            std::cin >> a[i];
        }
        int k = 1;
        for (int i = 0; i < n; i += 1) {
            if (a[i] == 0 && i != 0 && a[i - 1] == 0) {
                k = -1;
                break;
            }
            if (a[i] == 1) {
                if (i == 0 || a[i - 1] == 0) {
                    k += 1;
                    continue;
                }
                if (a[i - 1] == 1) {
                    k += 5;
                }
            }
        }
        std::cout << k << '\n';
    }
}
