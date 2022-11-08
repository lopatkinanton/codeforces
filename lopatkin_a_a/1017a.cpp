#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n = 0;
    std::cin >> n;
    std::vector <int> scores;
    int john_score = 0;
    for (int id = 1; id <= n; id += 1) {
        int a = 0;
        int b = 0;
        int c = 0;
        int d = 0;
        std::cin >> a >> b >> c >> d;
        int score = a + b + c + d;
        scores.push_back(score);
        if (id == 1) {
            john_score = score;
        }
    }
    std::sort(scores.rbegin(), scores.rend());
    int john_place = 0;
    for (int i = 0; i < n; i += 1) {
        if (john_score == scores[i]) {
            john_place = i + 1;
            break;
        }
    }
    std::cout << john_place;
}