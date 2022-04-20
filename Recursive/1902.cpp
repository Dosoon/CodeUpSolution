#include <iostream>

using namespace std;

void recursive(int num)
{
	if (num < 1)
		return;
	cout << num-- << endl;
	recursive(num);
}

int main()
{
	int n;
	cin >> n;
	recursive(n);
	return 0;
}