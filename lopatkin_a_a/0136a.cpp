#include <iostream>
#include <vector>

int main() {
	int n = 0;
	std::cin >> n;
	std::vector <int> v(n);
	for (int i = 0; i < n; i += 1) {
		int p = 0;
		std::cin >> p;
		v[p - 1] = i + 1;
	}
	for (int i = 0; i < n; i += 1)
		std::cout << v[i] << ' ';
}