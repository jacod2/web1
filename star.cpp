#include <iostream>

using namespace std;

int main()
{
	int iNum;
	cin >> iNum;

	cout << "1��------------------------" << endl;
	for (int i = 1; i <= iNum; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	cout << "2��------------------------" << endl;
	for (int i = iNum; i > 0; i--)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	cout << "3��------------------------" << endl;
	for (int i = 1; i <= iNum; i++)
	{
		for (int j = iNum - i; j > 0; j--)
		{
			cout << " ";
		}
		for (int j = 1; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	cout << "4��------------------------" << endl;
	for (int i = 1; i <= iNum; i++)
	{
		for (int j = i - 1; j > 0; j--)
		{
			cout << " ";
		}
		for (int j = i; j <= iNum; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	cout << "5��------------------------" << endl;
	for (int i = 1; i <= iNum; i++)
	{
		for (int j = 0; j < iNum - i; j++)
		{
			cout << " ";
		}
		for (int j = 0; j < (2 * i) - 1; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	cout << "6��------------------------" << endl;
	for (int i = iNum; i > 0; i--)
	{
		for (int j = i; j < iNum; j++)
		{
			cout << " ";
		}
		for (int j = 0; j < (2 * i) - 1; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	cout << "7��------------------------" << endl;
	for (int i = 0; i < iNum; i++)
	{
		for (int j = 0; j < iNum; j++)
		{
			if ((i + j) % 2 == 0)
				cout << "o";
			else
				cout << "x";
		}
		cout << endl;
	}
}