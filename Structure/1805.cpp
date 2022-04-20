#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Product {
	char id;
	int gas;
};

bool compare(Product p1, Product p2)
{
	return p1.id < p2.id;
}

int main()
{
	int n, id, gas;
	vector<Product> Products;

	cin >> n;;

	for (int iCnt = 0; iCnt < n; iCnt++)
	{
		Product* prod = (Product*)malloc(sizeof(Product));
		cin >> id >> gas;
		prod->id = id;
		prod->gas = gas;
		Products.push_back(*prod);
	}

	sort(Products.begin(), Products.end(), compare);

	vector<Product>::iterator iter = Products.begin();
	
	for (; iter != Products.end(); iter++)
	{
		printf("%d %d\n", iter->id, iter->gas);
	}

	Products.clear();

	return 0;
}