#include <iostream>
#include <string>
#include <vector>

int main() {
	int t = 0;
	std::cin >> t;
	for (int iTest = 0; iTest < t; iTest += 1) {
		int a = 0, b = 0;
		std::cin >> a >> b;
		int l = a + b;
		std::string s;
		std::cin >> s;
		int f = 1;
		for (int i = 0; i < l / 2; i += 1) {
			if (s[i] == '0') {
				if (s[l - i - 1] == '?') {
					s.replace(l - 1 - i, 1, 1, '0');
				}
				a -= 2;
			}
			else if (s[i] == '1') {
				if (s[l - i - 1] == '?') {
					s.replace(l - 1 - i, 1, 1, '1');
				}
				b -= 2;
			}
			else {
				if (s[l - 1 - i] == '0') {
					s.replace(i, 1, 1, '0');
					a -= 2;
				}
				if (s[l - 1 - i] == '1') {
					s.replace(i, 1, 1, '1');
					b -= 2;
				}
			}
		}
		if (l % 2 == 1) {
			if (s[l / 2] == '0') a -= 1;
			if (s[l / 2] == '1') b -= 1;
		}
		for (int i = 0; i < l; i += 1) {
			if (s[i] == '?' && s[l - i - 1] == '?') {
				if (a > b) {
					s.replace(i, 1, 1, '0');
					s.replace(l - i - 1, 1, 1, '0');
					i == l - i - 1 ? a -= 1 : a -= 2;
				}
				else {
					s.replace(i, 1, 1, '1');
					s.replace(l - i - 1, 1, 1, '1');
					i == l - i - 1 ? b -= 1 : b -= 2;
				}
			}
		}
		for (int i = 0; i < l; i += 1) {
			if (s[i] != s[l - 1 - i]) {
				f = 0;
				break;
			}
		}
		if (f && a == 0 && b == 0 ) std::cout << s << '\n';
		else std::cout << -1 << '\n';
	}
	return 0;
}
