#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n = 0;
    std::cin >> n;
    std::vector <int> a(n);
    for (int i = 0; i < n; i += 1) {
        std::cin >> a[i];
    }
    sort(a.begin(), a.end());
    int k = 1;
    for (int i = 0; i < n; i += 1) {
        if (a[i] >= k) {
            k += 1;
        }
    }
    std::cout << k - 1;
}