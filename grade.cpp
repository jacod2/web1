#include <iostream>

using namespace std;

void main()
{
	int kor = 0, eng = 0, math = 0,avg = 0,tot = 0;
	double prt_avg = 0.f;
	
	cout << "���� ����  ���� ������ �������� �����ؼ� �Է����ּ���(0~100)" << endl;
	cin >> kor >> eng >> math;
	if (!(0 <= kor && 100 >= kor))
	{
		cout << "������ ������ ������ ����ϴ�" << endl;
		return;
	}
	if (!(0 <= eng && 100 >= eng))
	{
		cout << "������ ������ ������ ����ϴ�" << endl;
		return;
	}
	if (!(0 <= math && 100 >= math))
	{
		cout << "������ ������ ������ ����ϴ�" << endl;
		return;
	}
	prt_avg = (kor + eng + math) / 3.0;
	avg = (kor + eng + math) / 3;
	tot = (kor + eng + math);
	cout << "���������� " << kor << "�� �Դϴ�." << endl;
	cout << "���������� " << eng << "�� �Դϴ�." << endl;
	cout << "���������� " << math << "�� �Դϴ�." << endl;
	cout.precision(6);
	cout << "��������� " << prt_avg << "�� �Դϴ�." << endl;
	cout << "���������� " << tot << "�� �Դϴ�." << endl;

	cout <<endl << "if�� version" << endl;
	if (90 <= avg && 100 >= avg)
	{
		cout << "�������� A�Դϴ�." << endl;
	}
	else if (80 <= avg && 90 > avg)
	{
		cout << "�������� B�Դϴ�." << endl;
	}
	else if (70 <= avg && 80 > avg)
	{
		cout << "�������� C�Դϴ�." << endl;
	}
	else if (60 <= avg && 70 > avg)
	{
		cout << "�������� D�Դϴ�." << endl;
	}
	else
	{
		cout << "�������� F�Դϴ�." << endl;
	}

	cout << endl << "switch�� version" << endl;

	switch (avg/10)
	{
	case 10:
	case 9:
		cout << "�������� A�Դϴ�." << endl;
		break;
	case 8:
		cout << "�������� B�Դϴ�." << endl;
		break;
	case 7:
		cout << "�������� C�Դϴ�." << endl;
		break;
	case 6:
		cout << "�������� D�Դϴ�." << endl;
		break;
	default :
		cout << "�������� F�Դϴ�." << endl;
	}
	cout << endl;
}