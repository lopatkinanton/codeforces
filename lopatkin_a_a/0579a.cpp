#include <iostream>

int main() {
    int n = 0;
    std::cin >> n;
    int ans = 0;
    while (n > 0) {
        if (n & 1) {
            ans += 1;
        }
        n = n >> 1;
    }
    std::cout << ans;
}