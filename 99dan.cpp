#include <iostream>

using namespace std;

void main() 
{
	int iNum = 1,iNum_first = 2,iNum_second = 1;
	cout << "������ 2���� ����մϴ�" << endl;
	while (9 >= iNum)
	{
		cout << "2 * " << iNum << " = " << 2 * iNum << endl;
		iNum++;
	}
	cout << endl << "�������� 2�� ���� 9�ܱ��� ����մϴ�" << endl;
	while (9 >= iNum_first)
	{
		iNum_second = 1;
		while (9 >= iNum_second)
		{
			cout << iNum_first << " * " << iNum_second << " = " << iNum_first * iNum_second << endl;
			iNum_second++;
		}
		cout << endl;
		iNum_first++;
	}

}