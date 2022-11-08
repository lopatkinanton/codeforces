#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n = 0;
    int A = 0;
    int B = 0;
    std::cin >> n >> A >> B;
    std::vector <long long> s(n - 1);
    long long s1 = 0;
    std::cin >> s1;
    long long S = s1;
    for (int i = 0; i < n - 1; i += 1) {
        std::cin >> s[i];
        S += s[i];
    }
    std::sort(s.rbegin(), s.rend());
    int k = 0;
    while (s1 * A < B * S) {
        S -= s[k];
        k += 1;
    }
    std::cout << k;
}