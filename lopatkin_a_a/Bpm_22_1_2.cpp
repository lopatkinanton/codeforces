#include <iostream>
#include <cmath>

int main() {
    double x = 0;
    double y = 0;
    int k = 0;
    int n = 0;
    while (std::cin >> x >> y) {
        if (x * x + y * y <= 4 && x * x + y >= 2) {
            k += 1;
        }
        n += 1;
    }
    std::cout << k << '/' << n;
}