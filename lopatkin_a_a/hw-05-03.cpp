#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    int a = 0;
    int b = 1;
    double k = 0.1;
    double e = 0.0001;
    std::cout << std::setw(5) << "x" << std::setw(3) << "|" << std::setw(10) << "s(x)" << std::setw(3) << "|" << std::setw(10) << "f(x)\n";
    for (double x = a; x - b <= e; x += k) {
        double sum = 0;
        double s = e;
        int i = 0;
        int fact = 1;
        while (std::abs(s) >= e && s != 0) {
            if (i > 1) fact *= i;
            s = (double) std::pow(2 * x, i) / fact;
            sum += s;
            i += 1;
        }
        sum -= s;
        double f = std::pow(M_E, 2 * x);
        std::cout << std::setw(5) << x << std::setw(3) << "|" << std::setw(10) << sum << std::setw(3) << "|" << std::setw(10) << f << '\n';
    }
}