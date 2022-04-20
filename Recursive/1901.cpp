#include <iostream>

using namespace std;

void recursive(int curr, int num)
{
	if (curr > num)
		return;
	cout << curr << endl;
	recursive(curr + 1, num);
}

int main()
{
	int n;
	cin >> n;
	recursive(1, n);
	return 0;
}