#include <iostream>
#include <vector>

int main() {
    int t = 0;
    std::cin >> t;
    for (int iTest = 0; iTest < t; iTest += 1) {
        int a00 = 0;
        int a01 = 0;
        int a10 = 0;
        int a11 = 0;
        std::cin >> a00 >> a01 >> a10 >> a11;
        if (a00 == 0 && a01 == 0 && a10 == 0 && a11 == 0)
            std::cout << "0\n";
        else if (a00 == 1 && a01 == 1 && a10 == 1 && a11 == 1)
            std::cout << "2\n";
        else
            std::cout << "1\n";
    }
}