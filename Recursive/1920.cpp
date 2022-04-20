#include <iostream>

using namespace std;

string bin = "";

void binary(int n)
{
	if (n < 1)
	{
		cout << bin;
		return;
	}

	bin = (char)(n % 2 + '0') + bin;
	binary(n / 2);
}

int main()
{
	int n;
	cin >> n;
	if (n == 0)
		cout << 0;
	else
		binary(n);
}