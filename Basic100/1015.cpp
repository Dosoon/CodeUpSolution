#include <iostream>

using namespace std;

int main()
{
	float f;
	cin >> f;
	cout.setf(ios::fixed);
	cout.precision(2);
	cout << f;
}