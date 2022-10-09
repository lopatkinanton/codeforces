#include <iostream>

int main()
{
    std::string s;
    std::cin >> s;
    s += ' ';
    int k = 0, c = 0, p = 0;
    for (int i = 0; i < s.length(); i += 1){
        if (s[i] == 'C') c += 1;
        if (s[i] == 'P') p += 1;
        if (c > 0 && s[i] == 'P'){
            k += 1;
            c = 0;
        }
        if (s[i] == 'C' && p > 0){
            k += 1;
            p = 0;
        }
        if (c == 5 || p == 5){
            k += 1;
            c = 0;
            p = 0;
        }
    }
    if (c > 0 || p > 0) k += 1;
    std::cout << k;
}
