#include <iostream>
#include <cmath>

int main() {
    int x = 0;
    int y = 0;
    for (int i = 0; i < 5; i += 1) {
        for (int j = 0; j < 5; j += 1) {
            int n;
            std::cin >> n;
            if (n == 1) {
                x = j;
                y = i;
            }
        }
    }
    std::cout << std::abs(x - 2) + std::abs(y - 2);
}
