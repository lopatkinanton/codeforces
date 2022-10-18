#include <iostream>

int main()
{
    int w = 0;
    std::cin >> w;
    if (w % 2 == 0 && w >= 4) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}
