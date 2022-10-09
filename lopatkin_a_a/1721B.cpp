#include <iostream>

int main()
{
    int t = 0;
    std::cin >> t;
    for (int i = 0; i < t; i += 1) {
        int n = 0, m = 0, sx = 0, sy = 0, d = 0;
        std::cin >> n >> m >> sx >> sy >> d;
        int minl = std::min(sx - 1, m - sy);
        int minr = std::min(sy - 1, n - sx);
        if (minl <= d && minr <= d) std::cout << -1 << std::endl;
        else std::cout << n + m - 2 << std::endl;
    }
}
