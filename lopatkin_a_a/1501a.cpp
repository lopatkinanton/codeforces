#include <iostream>
#include <vector>

int main() {
	int t = 0;
	std::cin >> t;
	for (int iTest = 0; iTest < t; iTest += 1) {
		int n = 0; 
		std::cin >> n;
		std::vector <int> a(n + 1);
		std::vector <int> b(n + 1);
		for (int i = 1; i <= n; i += 1)
			std::cin >> a[i] >> b[i];
		std::vector <int> tm(n + 1);
		for (int i = 1; i <= n; i += 1)
			std::cin >> tm[i];

		int time = 0;
		for (int i = 1; i <= n; i += 1) {
			time += a[i] - b[i - 1] + tm[i];
			if (i == n) 
				break;
			int d = b[i] - a[i];
			for (int s = 1; s <= d; s += 1) {
				time += 1;
				if (time >= b[i] && 2 * s >= b[i] - a[i])
					break;
			}
		}
		std::cout << time << '\n';
	}
}