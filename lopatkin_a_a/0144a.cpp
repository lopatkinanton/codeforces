#include <iostream>

int main()
{
    int n = 0, maxx = 0, minn = 100, x, y;
    std::cin >> n;
    for (int i = 0; i < n; i += 1){
        int a = 0;
        std::cin >> a;
        if (a > maxx){
            maxx = a;
            x = i;
        }
        if (a <= minn){
            minn = a;
            y = i;
        }
    }
    if (x < y) std::cout << x + n - y - 1;
    else std::cout << x + n - y - 2;
}
