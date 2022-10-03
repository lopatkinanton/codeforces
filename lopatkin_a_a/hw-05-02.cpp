#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

int main() {
    int a = 0;
    int b = 1;
    double k = 0.05;
    double e = 0.001;
    std::cout << "x\t|\ts(x)\t|\tf(x)\n";
    for (double x = a; x <= b; x += k) {
        double sum = 0;
        double s = e;
        int i = 1;
        while (s >= e) {
            s = std::pow(x, i) * sin(i * M_PI_4);
            sum += s;
            i += 1;
        }
        sum -= s;
        double f = x * sin(M_PI_4) / (1 - 2 * x * cos(M_PI_4));
        std::cout << x << "\t|\t" << sum << "\t|\t" << f << '\n';
    }
}