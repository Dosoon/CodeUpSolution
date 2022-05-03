#include <iostream>
#include <string.h>
#include <vector>

using namespace std;
vector<int> stack;

int main()
{
	string a, b;
	int temp;
	bool tempFlag = false;
	cin >> a >> b;

	while ((strcmp(a.c_str(), "") != 0) && (strcmp(b.c_str(), "") != 0))
	{
		temp = a.back() + b.back() - '0' * 2;
		if (tempFlag == true)
		{
			temp++;
			tempFlag = false;
		}
		if (temp > 9)
		{
			temp -= 10;
			tempFlag = true;
		}
		stack.push_back(temp);
		a.pop_back();
		b.pop_back();
	}

	while (strcmp(a.c_str(), "") != 0)
	{
		temp = a.back() - '0';
		if (tempFlag)
		{
			temp++;
			tempFlag = false;
		}
		if (temp > 9)
		{
			temp -= 10;
			tempFlag = true;
		}
		stack.push_back(temp);
		a.pop_back();
	}

	while (strcmp(b.c_str(), "") != 0)
	{
		temp = b.back() - '0';
		if (tempFlag)
		{
			temp++;
			tempFlag = false;
		}
		if (temp > 9)
		{
			temp -= 10;
			tempFlag = true;
		}
		stack.push_back(temp);
		b.pop_back();
	}

	if (tempFlag)
		stack.push_back(1);

	while (!stack.empty())
	{
		cout << stack.back();
		stack.pop_back();
	}

	return 0;
}