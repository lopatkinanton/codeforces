#include <iostream>
#include <string>

int main() {
    int t = 0;
    std::cin >> t;
    for (int iTest = 0; iTest < t; iTest += 1) {
        int n = 0;
        int m = 0;
        std::cin >> n >> m;
        int iR = -1;
        std::string ans = "YES";
        for (int i = 0; i < n; i += 1) {
            std::string row;
            std::cin >> row;
            if (iR == -1) {
                for (int j = 0; j < m; j += 1) {
                    if (row[j] == 'R') {
                        iR = j;
                        break;
                    }
                }
            }
            else {
                for (int j = 0; j < iR; j += 1) {
                    if (row[j] == 'R') {
                        ans = "NO";
                        break;
                    }
                }
            }
        }
        std::cout << ans << '\n';
    }
    return 0;
}