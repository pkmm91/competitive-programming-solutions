#include <iostream>
using namespace std;
int count_bits(int n) {
	int i = 0;
	while (n > 0) {
		if (n & 1)
			i++;
		n >>= 1;
	}
	return i;
}

int smallest_greater_same_weight(int n) {
	int i = count_bits(n);
	int m = n;

	for (;;) {
		if (i == count_bits(++m))
			break;
	}

	return m;
}

int main() {
	int ntests;
	std::cin >> ntests;
	if (std::cin.fail())
		return 1;

	while (ntests--) {
		int n;
		std::cin >> n;
		if (std::cin.fail())
			return 1;

		std::cout << smallest_greater_same_weight(n) << std::endl;
	}

	return 0;
}
