#include <iostream>

using namespace std;

void main()
{
	int iBalance = 0, iSelect = 0, iPlus = 0, iCoke = 1000, iSoda = 800, iPine = 700,iDrink = 0;
	cout << "����� ���Ǳ� �Դϴ� �ݾ��� �������ּ��� ~^^~ " << endl << "�ݾ����� : ";
	cin >> iBalance;
	while (1)
	{
		cout << endl << "�ܾ� : " << iBalance << endl << endl;
		cout << "��ȣ�� �������ּ���" << endl << endl;
		cout << "1.�ݶ�(" << iCoke <<"��) 2.���̴�(" << iSoda << "��) 3.���Ǵ�(" << iPine << ")��"<<endl <<"4.�ݾ� �߰� ���� 5.���� �ݾ� ���� 6. ������" << endl << "��ȣ ���� : ";
		cin >> iSelect;
		switch (iSelect)
		{
		case 1 : 
			if (iBalance >= iCoke)
			{
				cout << endl << "�ݶ� ���Խ��ϴ�!" << endl;
				iBalance -= iCoke;
			}
			else
			{
				cout << endl << "�ܾ��� " << iCoke - iBalance <<  "�� �����մϴ� �ݾ��� �߰� �������ּ��� ^^" << endl;
			}
			break;
		case 2:
			if (iBalance >= iSoda)
			{
				cout << endl << "���̴ٰ� ���Խ��ϴ�!" << endl;
				iBalance -= iSoda;
			}
			else
			{
				cout << endl << "�ܾ��� " << iSoda - iBalance << "�� �����մϴ� �ݾ��� �߰� �������ּ��� ^^" << endl;
			}
			break;
		case 3:
			if (iBalance >= iPine)
			{
				cout << endl << "���Ǵ��� ���Խ��ϴ�!" << endl;
				iBalance -= iPine;
			}
			else
			{
				cout << endl << "�ܾ��� " << iPine - iBalance << "�� �����մϴ� �ݾ��� �߰� �������ּ��� ^^" << endl;
			}
			break;
		case 4:
			cout << endl << "�߰� ������ �ݾ��� �Է����ּ��� " << endl << "���� �ݾ� : ";
			cin >> iPlus;
			iBalance += iPlus;
			break;
		case 5:
			cout << "�ݾ��� �����Ͻ� ������� ��ȣ�� �������ּ���" << endl;
			cout << "1.�ݶ�(" << iCoke << "��)" << endl << "2.���̴�(" << iSoda << "��) " << endl << "3.���Ǵ�(" << iPine << ")��"<< endl << "4.������ "<< endl;
			cin >> iDrink;
			switch (iDrink)
			{
			case 1:
				cout << "�����Ͻ� ������ �ݾ��� �Է����ּ��� :";
				cin >> iCoke;
				cout << "�ݾ� ������ �Ϸ�Ǿ����ϴ�" << endl;
				break;
			case 2:
				cout << "�����Ͻ��� �ݾ��� �Է����ּ��� :";
				cin >> iSoda;
				cout << "�ݾ� ������ �Ϸ�Ǿ����ϴ�" << endl;
				break;
			case 3:
				cout << "�����Ͻ��� �ݾ��� �Է����ּ��� :";
				cin >> iPine;
				cout << "�ݾ� ������ �Ϸ�Ǿ����ϴ�" << endl;
				break;
			case 4:
				cout << "�ݾ� ������ ����մϴ� �ʱ�ȭ������ ���ư��ϴ�" << endl;
				break;
			default:
				cout << "�߸��� �Է��Դϴ� �ʱ�ȭ������ ���ư��ϴ�" << endl;
				break;
			}
			break;
		case 6:			
				cout << endl << "�̿����ּż� �����մϴ� �ȳ��������� ^^7" << endl;
			return;
		default:
			cout << endl << "�߸��� ��ȣ�� �����ϼ̽��ϴ� �ٽ� �Է����ּ��� ^^" << endl;
			break;
		}
	}
}