#include <iostream>
#include <vector>

using namespace std;

vector<int> Stack;

int main()
{
	int n, num;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> num;
		Stack.push_back(num);
	}

	while (!Stack.empty())
	{
		cout << Stack.back() << " ";
		Stack.pop_back();
	}
	return 0;
}