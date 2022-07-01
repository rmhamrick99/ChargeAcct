#include<iostream>
using namespace std;

const int SIZE = 18;

class charge
{
public:
	int mainline();

private:

	int accounts [SIZE] { 5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 8080152, 4562555, 5552012, 5050552, 7825877, 1250255, 1005231, 6545231, 3852085, 7576651, 7881200, 4581002};
	int results;
	int userAcct;

	int getOutput();
	int linearSearch(const int[], int, int);
};

int main()
{
	charge ca;
	ca.mainline();

	system("pause");
	return 0;
}

int charge::mainline()
{
	cout << "Please input an account number." <<endl;
	cin >> userAcct;

	getOutput();

	return 0;
}

int charge:: linearSearch(const int arr[], int size, int value)
{
	int index = 0;
	bool found = false;
	int position = -1;

	while (index < size && !found)
	{
		if (arr[index]==value)
		{
			found = true;
			position = index;
		}
		index++;
	}
	return position;
}
int charge::getOutput()
{
	results = linearSearch(accounts, SIZE, userAcct);

	if (results == -1)
		cout << "Invalid Account Number\n";

	else
	{
		cout << "Valid Account Number"<< endl; 
	}
	return 0;
}

