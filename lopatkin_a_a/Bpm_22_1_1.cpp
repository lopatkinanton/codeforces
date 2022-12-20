#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    double eps = 0.0001;
    std::cout << std::setw(5) << "x" << std::setw(3) << "|" << std::setw(10) << "sum\n";
    for (double x = 0.1; x - 1 <= eps; x += 0.05) {
        double sum = 0;
        int i = 1;
        double s = eps;
        double p = x;
        while (std::abs(s) >= eps) {
            int k = (i % 2 == 0) ? -1 : 1;
            p = p * x * x;
            s = k * p / (4 * i * i - 1);
            sum += s;
            i += 1;
        }
        sum -= s;
        std::cout << std::setw(5) << x << std::setw(3) << "|" << std::setw(10) << sum << '\n';
    }
}