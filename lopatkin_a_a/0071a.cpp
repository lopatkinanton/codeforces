#include <iostream>
#include <string>

std::string intToString(int k) {
    char a = k / 100 + '0';
    char b = k / 10 % 10 + '0';
    char c = k % 10 + '0';
    std::string s;
    if (k >= 100) {
        s.push_back(a);
        s.push_back(b);
        s.push_back(c);
    }
    else if (k >= 10) {
        s.push_back(b);
        s.push_back(c);
    }
    else {
        s.push_back(c);
    }
    return s;
}

int main() {
    int n = 0;
    std::cin >> n;
    for (int i = 0; i < n; i += 1) {
        std::string s;
        std::cin >> s;
        int len = s.length();
        if (len <= 10) {
            std::cout << s << std::endl;
        }
        else {
            std::string ans;
            ans.push_back(s[0]);
            ans += intToString(len - 2);
            ans.push_back(s[len - 1]);
            std::cout << ans << std::endl;
        }
    }
    return 0;
}
