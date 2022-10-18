#include <iostream>

int main() {
    int y = 0;
    std::cin >> y;
    for (y += 1; y < 10000; y += 1) {
        int a = y / 1000;
        int b = y / 100 % 10;
        int c = y / 10 % 10;
        int d = y % 10;
        bool x = a != b;
        x = x && a != c;
        x = x && a != d;
        x = x && b != c;
        x = x && b != d;
        x = x && c != d;
        if (x) {
            std::cout << y;
            break;
        }
    }
}
