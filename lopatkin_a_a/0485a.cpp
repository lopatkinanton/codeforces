#include <iostream>
#include <set>
#include <string>

int main() {
    int a = 0;
    int m = 0;
    std::cin >> a >> m;
    std::set <int> s;
    std::string ans = "Yes";
    while (a % m != 0) {
        if (s.find(a % m) != s.end()) {
            ans = "No";
            break;
        }
        s.insert(a % m);
        a += a % m;
    }
    std::cout << ans;
}