#include <iostream>

using namespace std;

int main()
{
	int n;
	char c;
	string num;
	string commaNum;

	cin >> n >> num;

	for (int i = 1; i <= n; i++)
	{
		commaNum.push_back(num[n - i]);
		if (i != n && i % 3 == 0)
			commaNum.push_back(',');
		
	}

	while (!commaNum.empty())
	{
		cout << commaNum.back();
		commaNum.pop_back();
	}

	return 0;
}