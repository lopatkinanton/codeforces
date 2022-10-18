#include <iostream>
#include <array>
#include <vector>

int main()
{
    int n = 0;
    std::cin >> n;
    std::vector <int> a;
    a.reserve(n);
    std::array <int, 1001> s{ 0 };
    std::vector <int> v;
    for (int i = 0; i < n; i += 1) {
        std::cin >> a[i];
    }
    for (int i = n - 1; i >= 0; i -= 1) {
        if (s[a[i]] == 0) {
            v.push_back(a[i]);
        }
        s[a[i]] += 1;
    }
    std::cout << v.size() << std::endl;
    for (int i = v.size() - 1; i >= 0; i -= 1) {
        std::cout << v[i] << ' ';
    }
}
