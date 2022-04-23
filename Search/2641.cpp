#include <iostream>

using namespace std;

int cnt = 0;

void _upStairs(int, int, int, string);

void upStairs(int stairs)
{
	for (int i = 1; i <= 3; i++)
	{
		if (i > stairs)
			break;
		if (i == 3)
			_upStairs(i, stairs, 2, "");
		else
			_upStairs(i, stairs, 0, "");
	}
}

void _upStairs(int step, int stairs, int flag, string str)
{
	if (step > stairs)
		return;

	str += char(step + '0');
	stairs -= step;

	if (stairs == 0)
	{
		cnt++;
		return;
	}

	int maxStep;

	if (flag > 0)
	{
		maxStep = 2;
		flag--;
	}
	else
		maxStep = 3;

	for (int i = 1; i <= maxStep; i++)
	{
		if (i > stairs)
			break;
		if (i == 3)
			_upStairs(i, stairs, 2, str);
		else
			_upStairs(i, stairs, flag, str);
	}
}

int main()
{
	int n;
	
	cin >> n;
	upStairs(n);
	cout << cnt << endl;

	return 0;
}