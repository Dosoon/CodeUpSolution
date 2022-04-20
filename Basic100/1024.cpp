#include <iostream>

using namespace std;

int main()
{
	string word;
	cin >> word;
	
	for (int i = 0; i < word.length(); i++)
	{
		cout << '\'' << word[i] << '\'' << endl;
	}
}