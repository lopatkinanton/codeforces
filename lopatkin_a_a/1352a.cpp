#include <iostream>

int main()
{
    int t = 0;
    std::cin >> t;
    for (int i = 0; i < t; i += 1){
        int n = 0;
        int k = 0;
        std::cin >> n;
        int a = n / 10000 * 10000;
        int b = n / 1000 % 10 * 1000;
        int c = n / 100 % 10 * 100;
        int d = n / 10 % 10 * 10;
        int e = n % 10;
        if (a != 0) {
            k += 1;
        }
        if (b != 0) {
            k += 1;
        }
        if (c != 0) {
            k += 1;
        }
        if (d != 0) {
            k += 1;
        }
        if (e != 0) {
            k += 1;
        }
        std::cout << k << std::endl;
        if (a != 0) {
            std::cout << a << ' ';
        }
        if (b != 0) {
            std::cout << b << ' ';
        }
        if (c != 0) {
            std::cout << c << ' ';
        }
        if (d != 0) {
            std::cout << d << ' ';
        }
        if (e != 0) {
            std::cout << e;
        }
        std::cout << std::endl;
    }
}
