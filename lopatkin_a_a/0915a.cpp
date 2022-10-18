#include <iostream>

int main() {
    int n = 0; 
    int k = 0;
    std::cin >> n >> k;
    int t = 1.0E9;
    for (int i = 0; i < n; i += 1) {
        int a = 0;
        std::cin >> a;
        if (k % a == 0) {
            t = std::min(t, k / a);
        }
    }
    std::cout << t;
    return 0;
}
