#include <iostream>

int main()
{
    int n = 0, k = 0, m = -2e9;
    std::cin >> n >> k;
    for (int i = 0; i < n; i += 1){
        int f, t;
        std::cin >> f >> t;
        if (t > k) m = std::max(m, f - (t - k));
        else m = std::max(m, f);
    }
    std::cout << m;
}
