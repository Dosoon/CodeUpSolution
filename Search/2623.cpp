#include <iostream>

using namespace std;

int main()
{
	int a, b, min, gcd;
	cin >> a >> b;
	
	if (a > b) min = b;
	else min = a;

	for (int i = 1; i <= min; i++)
	{
		if (!(a % i) && !(b % i))
			gcd = i;
	}

	cout << gcd;
}