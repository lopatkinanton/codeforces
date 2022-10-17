#include <iostream>
#include <vector>
#include <string>

int main() {
    int t = 0;
    std::cin >> t;
    for (int iTest = 0; iTest < t; iTest += 1) {
        int n = 8;
        std::vector<std::string> a(n);
        for (int i = 0; i < n; i += 1)
            std::cin >> a[i];
        int r = 0;
        int c = 0;
        for (int i = 1; i < n - 1; i += 1) {
            for (int j = 1; j < n - 1; j += 1) {
                if (a[i][j] == '#' && a[i - 1][j - 1] == '#' && a[i - 1][j + 1] == '#' && a[i + 1][j - 1] == '#' && a[i + 1][j + 1] == '#') {
                    r = i + 1;
                    c = j + 1;
                    break;
                }

            }
        }
        std::cout << r << ' ' << c << '\n';
    }
}