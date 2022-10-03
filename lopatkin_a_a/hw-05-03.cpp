#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

long long factorial(int a) {
    long long n = 1;
    for (int i = 1; i <= a; i += 1)
        n *= i;
    return n;
}

int main() {
    int a = 0;
    int b = 1;
    double k = 0.1;
    double e = 0.0001;
    std::cout << "x\t|\ts(x)\t|\tf(x)\n";
    for (double x = a; x <= b; x += k) {
        double sum = 0;
        double s = e;
        int i = 0;
        while (s >= e) {
            s = (double) std::pow(2 * x, i) / factorial(i);
            sum += s;
            i += 1;
        }
        sum -= s;
        double f = std::pow(M_E, 2 * x);
        std::cout << x << "\t|\t" << sum << "\t|\t" << f << '\n';
    }
}