#include <iostream>
#include <string>
#include <vector>

int main() {
	std::ios_base::sync_with_stdio(false);
	int t = 0;
	std::cin >> t;
	for (int iTest = 0; iTest < t; iTest += 1) {
		int n = 0;
		std::cin >> n;
		std::string s;
		std::cin >> s;
		int k = 0;
		std::cin >> k;
		std::vector <int> d(26);
		for (int iChar = 0; iChar < k; iChar += 1) {
			char c;
			std::cin >> c;
			d[c - 'a'] = 1;
		}
		int m = 0;
		int last = 0;
		for (int i = 0; i < n; i += 1) {
			if (d[s[i] - 'a']) {
				m = std::max(i - last, m);
				last = i;
			}
		}
		std::cout << m << '\n';
	}
	return 0;
}
