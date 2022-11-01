#include <iostream>
#include <vector>

int main() {
    int t = 0;
    std::cin >> t;
    for (int iTest = 0; iTest < t; iTest += 1) {
        int n = 0;
        int m = 0;
        std::cin >> n >> m;
        std::vector < std::vector <int> > a(n, std::vector <int>(m));
        int t = 0;
        for (int i = 0; i < n; i += 2) {
            for (int j = 0; j < m; j += 2) {
                a[i][j] = t;
                a[i][j + 1] = 1 - t;
                a[i + 1][j] = 1 - t;
                a[i + 1][j + 1] = t;
                t = 1 - t;
            }
            if (m % 4 == 0) {
                t = 1 - t;
            }
        }
        for (int i = 0; i < n; i += 1) {
            for (int j = 0; j < m; j += 1) {
                std::cout << a[i][j] << ' ';
            }
            std::cout << '\n';
        }
    }
}