#include <iostream>
#include <string>

int main() {
    int n = 0;
    std::cin >> n;
    std::string s;
    std::cin >> s;
    int x = 0;
    int y = 0;
    int k = -1;
    int m = -1;
    for (int i = 0; i < n; i += 1) {
        if (s[i] == 'U') {
            y += 1;
        }
        if (s[i] == 'R') {
            x += 1;
        }
        if (y > x && k != 0) {
            m += 1;
            k = 0;
        }
        if (y < x && k != 1) {
            m += 1;
            k = 1;
        }
    }
    std::cout << m;
}
