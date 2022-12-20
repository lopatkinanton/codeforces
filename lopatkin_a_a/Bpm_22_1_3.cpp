#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main() {
    std::string word = "";
    std::cin >> word;
    word += ' ';
    std::vector <char> g = { 'a', 'o', 'u', 'i', 'e' };
    std::string ans = "YES";
    for (int iWord = 0; iWord < word.length() - 1; iWord += 1) {
        int t_cur = find(g.begin(), g.end(), word[iWord]) != g.end() ? 1 : 0; //если word[iWord] - гласная, то t = 1, иначе t = 0
        int t_next = find(g.begin(), g.end(), word[iWord + 1]) != g.end() ? 1 : 0;
        if (t_cur == 0 && t_next == 0 && word[iWord] != 'n') {
            ans = "NO";
            break;
        }
    }
    std::cout << ans;
}