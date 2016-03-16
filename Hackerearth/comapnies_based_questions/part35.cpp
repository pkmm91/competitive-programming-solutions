#include <iostream>
#include <cassert>
using namespace std;
int isprime(const unsigned int n)
{
	assert(n >= 3);
	assert(n % 2 == 1);   /* odd */
	for (unsigned int d = 3; d < n/2; d += 2)
		if (n % d == 0)
			return 0;

	return 1;
}

unsigned int nextprime(unsigned int n)
{
	if (n == 0)
		return 2;
	if (n % 2 == 0)
		n++;
	else
		n += 2;

	/* check each successive odd number */
	while (1) {
		if (isprime(n))
			return n;
		n += 2;
	}
}
int main()
{
	int t,n;
	std::cin >>t;
	while (t--) {
		std::cin >> n;

		std::cout <<nextprime(n)<< std::endl;
	}

	return 0;
}
