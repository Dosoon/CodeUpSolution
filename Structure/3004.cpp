#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Data {
	int num;
	int input;
	int order;
};

bool compareInput(Data d1, Data d2)
{
	return d1.input < d2.input;
}

bool compareNum(Data d1, Data d2)
{
	return d1.num < d2.num;
}

int main()
{
	int n, num, i = 0;
	vector<Data> Datas;

	cin >> n;;

	for (int iCnt = 0; iCnt < n; iCnt++)
	{
		Data* data = (Data*)malloc(sizeof(Data));
		cin >> num;
		data->num = num;
		data->input = iCnt;
		Datas.push_back(*data);
	}

	sort(Datas.begin(), Datas.end(), compareNum);

	vector<Data>::iterator iter = Datas.begin();
	
	for (; iter != Datas.end(); iter++)
	{
		iter->order = i++;
	}

	sort(Datas.begin(), Datas.end(), compareInput);

	iter = Datas.begin();

	for (; iter != Datas.end(); iter++)
	{
		cout << iter->order << ' ';
	}

	Datas.clear();

	return 0;
}