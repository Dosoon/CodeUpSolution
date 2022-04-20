#include <iostream>

using namespace std;

void recursiveOdd(int num, int limit)
{
	if (num > limit)
		return;
	cout << num << ' ';
	recursiveOdd(num + 2, limit);
}

int main()
{
	int a, b;
	cin >> a >> b;
	if (a % 2 == 0)
		recursiveOdd(a + 1, b);
	else
		recursiveOdd(a, b);

	return 0;
}