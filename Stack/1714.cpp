#include <iostream>

using namespace std;

int main()
{
	string num;
	cin >> num;

	while (!num.empty())
	{
		cout << num.back();
		num.pop_back();
	}

	return 0;
}