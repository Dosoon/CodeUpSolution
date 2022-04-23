#include <iostream>

using namespace std;

int keys[3];

int getMax(int* keys)
{
	if (keys[0] >= keys[1])
		if (keys[0] >= keys[2])
			return keys[0];
		else return keys[2];
	else if (keys[1] >= keys[2])
			return keys[1];
	else return keys[2];
}

int main()
{
	cin >> keys[0] >> keys[1] >> keys[2];

	int maxValue = getMax(keys);
	for (int i = maxValue; i > 0; i--)
	{
		if ((keys[0] % i == 0) && (keys[1] % i == 0) && (keys[2] % i == 0))
		{
			cout << i << endl;
			break;
		}
	}


	return 0;
}