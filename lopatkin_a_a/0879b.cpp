#include <iostream>
#include <queue>

int main() {
    int n = 0;
    long long k = 0;
    std::cin >> n >> k;
    std::queue <int> a;
    int winner = 0;
    std::cin >> winner;
    for (int i = 1; i < n; i += 1) {
        int strength = 0;
        std::cin >> strength;
        a.push(strength);
    }
    int ws = 0;
    while (ws < k && ws < n) {
        int opponent = a.front();
        if (winner > opponent) {
            a.pop();
            a.push(opponent);
            ws += 1;
        }
        else {
            a.pop();
            a.push(winner);
            winner = opponent;
            ws = 1;
        }
    }
    std::cout << winner;
}