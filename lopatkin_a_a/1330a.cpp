#include <iostream>
#include <vector>
#include <algorithm>

int main() {
	int t = 0;
	std::cin >> t;
	for (int i = 0; i < t; i += 1) {
		int n = 0, x = 0;
		std::cin >> n >> x;
		std::vector <int> v(201);
		for (int j = 0; j < n; j += 1) {
			int a = 0;
			std::cin >> a;
			v[a - 1] = 1;
		}
		for (int j = 0; j < v.size(); j += 1) {
			if (v[j] != 1) {
				x -= 1;
				v[j] = 1;
			}
			if (x == 0) break;
		}
		int u = 0;
		for (int j = 0; j < v.size(); j += 1) {
			if (v[j] != 1) {
				u = j;
				break;
			}
		}
		std::cout << u << std::endl;
	}
}
