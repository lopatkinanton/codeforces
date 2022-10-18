#include <iostream>
#include <vector>
#include <string>

int main() {
    int t = 0;
    std::cin >> t;
    for (int iTest = 0; iTest < t; iTest += 1) {
        int n = 0;
        std::cin >> n;
        std::vector <std::string> m(n);
        std::vector <int> x;
        std::vector <int> y;
        for (int i = 0; i < n; i += 1) {
            std::cin >> m[i];
            for (int j = 0; j < n; j += 1) {
                if (m[i][j] == '*') {
                    x.push_back(i);
                    y.push_back(j);
                }
            }
        }
        if (x[0] == x[1]) {
            if (x[0] < n - 1) {
                m[x[0] + 1][y[0]] = '*';
                m[x[0] + 1][y[1]] = '*';
            }
            else {
                m[x[0] - 1][y[0]] = '*';
                m[x[0] - 1][y[1]] = '*';
            }
        }
        else if (y[0] == y[1]) {
            if (y[0] < n - 1) {
                m[x[0]][y[0] + 1] = '*';
                m[x[1]][y[0] + 1] = '*';
            }
            else {            
                m[x[0]][y[0] - 1] = '*';
                m[x[1]][y[0] - 1] = '*';
            }
        }
        else {
            m[x[0]][y[1]] = '*';
            m[x[1]][y[0]] = '*';
        }
        for (int i = 0; i < n; i += 1) {
            std::cout << m[i] << '\n';
        }
    }
}
