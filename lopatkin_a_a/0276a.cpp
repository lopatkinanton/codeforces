#include <iostream>

int main() {
    int n = 0;
    int k = 0;
    int m = -2.0E9;
    std::cin >> n >> k;
    for (int i = 0; i < n; i += 1) {
        int f = 0;
        int t = 0;
        std::cin >> f >> t;
        if (t > k) {
            m = std::max(m, f - (t - k));
        }
        else {
            m = std::max(m, f);
        }
    }
    std::cout << m;
}
