#include <iostream>

int main()
{
    int t = 0;
    std::cin >> t;
    for (int a = 0; a < t; a += 1) {
        int n = 0, k = 0, r = 0, c = 0;
        std::cin >> n >> k >> r >> c;
        for (int i = 0; i < n; i += 1) {
            for (int j = 0; j < n; j += 1) {
                if ((j + r) % k == (i + c) % k) std::cout << 'X';
                else std::cout << '.';
            }
            std::cout << '\n';
        }
    }
}
