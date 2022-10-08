#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    int a = -1;
    int b = 1;
    double k = 0.1;
    double e = 0.001;
    std::cout << std::setw(5) << "x" << std::setw(3) << "|" << std::setw(10) << "s(x)" << std::setw(3) << "|" << std::setw(10) << "f(x)\n";
    for (double x = a; x - b <= e; x += k) {
        if (abs(x) < e) x = 0;
        double sum = 0;
        double s = e;
        int i = 0;
        int fact = 1;
        while (std::abs(s) >= e && s != 0) {
            if (i > 0)
                fact *= (2 * i - 1) * 2 * i;
            s = (double) (std::pow(-1, i) * std::pow(x, 2 * i)) / fact;
            sum += s;
            i += 1;
        }
        sum -= s;
        double f = cos(x);
        std::cout << std::setw(5) << x << std::setw(3) << "|" << std::setw(10) << sum << std::setw(3) << "|" << std::setw(10) << f << '\n';
    }
}