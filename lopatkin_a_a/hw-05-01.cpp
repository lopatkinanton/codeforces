#include <iostream>
#include <cmath>

long long factorial(int a) {
    long long n = 1;
    for (int i = 1; i <= a; i += 1) 
        n *= i;
    return n;
}

int main() {
    int a = -1;
    int b = 1;
    double k = 0.1;
    double e = 0.001;
    std::cout << "x\t|\ts(x)\t|\tf(x)\n";
    for (double x = a; x <= b; x += k) {
        double sum = 0;
        double s = e;
        int i = 0;
        while (s >= e) {
            s = (double) (std::pow(-1, i) * std::pow(x, 2 * i)) / factorial(2 * i);
            sum += s;
            i += 1;
        }
        sum -= s;
        double f = cos(x);
        std::cout << x << "\t|\t" << sum << "\t|\t" << f << '\n';
    }
}