#include <iostream>
using namespace std;

void main()
{
	int iNum = 0,iThousand = 0, iHundred = 0, iTen = 0, iOne = 0;
	cout << "4�ڸ� ������ �Է����ּ��� (ex.2149)" << endl << "���� �Է� : ";
	cin >> iNum;
	iThousand = iNum / 1000;
	iHundred = (iNum / 100) % 10;
	iTen = (iNum / 10) % 10;
	iOne = (iNum % 10);
	cout << "õ�� �ڸ��� " << iThousand << "�Դϴ�" << endl;
	cout << "���� �ڸ��� " << iHundred << "�Դϴ�" << endl;
	cout << "���� �ڸ��� " << iTen << "�Դϴ�" << endl;
	cout << "���� �ڸ��� " << iOne << "�Դϴ�" << endl;
}