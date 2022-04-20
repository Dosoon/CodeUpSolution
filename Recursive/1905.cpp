#include <iostream>

using namespace std;

int recursiveSum(int n)
{
	if (n == 1) return 1;
	else
		return n + recursiveSum(n - 1);
}

int main()
{
	int n;
	cin >> n;
	cout << recursiveSum(n);
}