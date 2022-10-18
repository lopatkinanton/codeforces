#include <iostream>
#include <string>
#include <cmath>
#include <vector>

std::vector <char> d = { '0', '1', '2' };

std::string ter(int n) {
    std::string t = "";
    while (n > 0) {
        t = d[n % 3] + t;
        n /= 3;
    }
    return t;
}

int main() {
    int a = 0;
    int c = 0;
    std::cin >> a >> c;
    std::string A = ter(a);
    std::string C = ter(c);
    if (A.size() > C.size()) {
        C.insert(0, A.size() - C.size(), '0');
    }
    else {
        A.insert(0, C.size() - A.size(), '0');
    }
    std::string B;
    for (int i = 0; i < A.size(); i += 1) {
        for (int j = 0; j < 3; j += 1) {
            if ((A[i] - '0' + d[j] - '0') % 3 == (C[i] - '0')){
                B.push_back(d[j]);
                break;
            }
        }
    }
    int b = 0;
    for (int i = 0; i < B.size(); i += 1) {
        b += (B[i] - '0') * std::pow(3, B.size() - i - 1);
    }
    std::cout << b;
    return 0;
}
