#include <iostream>

using namespace std;

unsigned long long int fiboNum[201];

int fibonacci(int n)
{
	if (n == 0)
		return 0;
	if (n <= 2)
		return 1;

	if (fiboNum[n - 1] == 0)
		fiboNum[n - 1] = fibonacci(n - 1);
	if (fiboNum[n - 2] == 0)
		fiboNum[n - 2] = fibonacci(n - 2);

	fiboNum[n] = (fiboNum[n - 1] + fiboNum[n - 2]) % 10009;
	return fiboNum[n];
}

int main()
{
	int n;
	cin >> n;
	cout << fibonacci(n) << endl;
}