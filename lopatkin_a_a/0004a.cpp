#include <iostream>

using namespace std;

int main()
{
    int w = 0;
    cin >> w;
    if (w % 2 == 0 && w >= 4) cout << "YES";
    else cout << "NO";
}