#include <iostream>

using namespace std;

int main()
{
	float f;

	cin.setf(ios::fixed);
	cout.setf(ios::fixed);

	cin.precision(6);
	cout.precision(6);

	cin >> f;
	cout << f;

	return 0;
}

//---------------------------------------------------------------------------
// cin.setf(ios::fixed)를 통해 자리수를 고정하도록 설정
// 해당 설정을 해제할 때에는 cin.unsetf(ios::fixed)
// 소수점 정밀도는 cin.precision(소수점 아래 자리) 함수로 설정 가능
//---------------------------------------------------------------------------
