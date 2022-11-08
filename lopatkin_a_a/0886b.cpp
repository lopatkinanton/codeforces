#include <iostream>
#include <vector>

int main() {
    int n = 0;
    std::cin >> n;
    std::vector <int> a(2E5 + 1, 2E8);
    for (int i = 0; i < n; i += 1) {
        int s = 0;
        std::cin >> s;
        a[s] = i;
    }
    int minn = 2E8;
    int ans = 0;
    for (int i = 0; i <= 2E5; i += 1) {
        if (a[i] < minn) {
            minn = a[i];
            ans = i;
        }
    }
    std::cout << ans;
}