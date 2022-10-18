#include <iostream>

int main() {
    int t = 0;
    std::cin >> t;
    for (int i = 0; i < t; i += 1) {
        int n = 0;
        int m = 0;
        int sx = 0;
        int sy = 0; 
        int d = 0;
        std::cin >> n >> m >> sx >> sy >> d;
        int minl = std::min(sx - 1, m - sy);
        int minr = std::min(sy - 1, n - sx);
        if (minl <= d && minr <= d) {
            std::cout << -1 << std::endl;
        }
        else {
            std::cout << n + m - 2 << std::endl;
        }
    }
}
