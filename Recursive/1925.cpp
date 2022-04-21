#include <iostream>

using namespace std;

int combination(int n, int r)
{
	if (n == r || r == 0)
		return 1;

	return combination(n-1, r-1) + combination(n-1, r);
	//return factorial(n) / (factorial(r) * factorial(n - r));
}

int main()
{
	// nCr == n! / (r! * (n-r)!)

	int n, r;
	
	while (1) {
		cin >> n >> r;
		cout << combination(n, r) << endl;
	}

	return 0;
}