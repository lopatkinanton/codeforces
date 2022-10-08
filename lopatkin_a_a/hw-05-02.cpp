#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    int a = 0;
    int b = 1;
    double k = 0.05;
    double e = 0.001;
    std::cout << std::setw(5) << "x" << std::setw(3) << "|" << std::setw(10) << "s(x)" << std::setw(3) << "|" << std::setw(10) << "f(x)\n";
    for (double x = a; x - b <= e; x += k) {
        double sum = 0;
        double s = e;
        double p = 1;
        int i = 1;
        while (std::abs(s) >= e && s != 0) {
            s = p * sin(i * M_PI_4);
            sum += s;
            i += 1;
            p *= x;
        }
        sum -= s;
        double f = x * sin(M_PI_4) / (1 - 2 * x * cos(M_PI_4));
        std::cout << std::setw(5) << x << std::setw(3) << "|" << std::setw(10) << sum << std::setw(3) << "|" << std::setw(10) << f << '\n';
    }
}