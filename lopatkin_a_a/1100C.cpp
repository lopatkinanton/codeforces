#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip> 
#include <cmath>


int main() {
    int n = 0;
    int r = 0;
    std::cin >> n >> r;
    double R = r * sin(M_PI / n) / (1 - sin(M_PI / n));
    std::cout << std::fixed;
    std::cout << std::setprecision(6) << R;
    return 0;
}