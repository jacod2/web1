#include <iostream>
#include <time.h>

using namespace std;
void RPS();
void Sniffling();
void StartGame();
int SelectGame();

void main()
{
	StartGame();
}

void RPS()
{
	system("cls");
	int MySel = 0;
	cout << "���������� ������ �����մϴ�.\n��ȣ�� �Է����ּ���(1.���� 2.���� 3.��) : ";
	cin >> MySel;
	if (!(MySel == 1 || MySel == 2 || MySel == 3))
	{
		cout << "�߸��� �Է��Դϴ�";
		return;
	}
	srand(unsigned(time(NULL)));
	int ComSel = (rand() % 3) + 1;
	system("cls");
	switch (ComSel)
	{
	case 1:
		cout << "��ǻ�ʹ� ���� �Դϴ�\n";
		break;
	case 2:
		cout << "��ǻ�ʹ� ���� �Դϴ�\n";
		break;
	case 3:
		cout << "��ǻ�ʹ� �� �Դϴ�\n";
		break;
	}
	switch(MySel)
	{
	case 1:
		if (ComSel == 1)
		{
			cout << "���º�\n";
		}
		else if (ComSel == 2)
		{
			cout << "��ǻ���� �¸�\n";
		}
		else
		{
			cout << "�÷��̾��� �¸�\n";
		}
		break;
	case 2:
		if (ComSel == 2)
		{
			cout << "���º�\n";
		}
		else if (ComSel == 3)
		{
			cout << "��ǻ���� �¸�\n";
		}
		else
		{
			cout << "�÷��̾��� �¸�\n";
		}
		break;
	case 3:
		if (ComSel == 3)
		{
			cout << "���º�\n";
		}
		else if (ComSel == 1)
		{
			cout << "��ǻ���� �¸�\n";
		}
		else
		{
			cout << "�÷��̾��� �¸�\n";
		}
		break;
	}
	system("pause");
}
void Sniffling()
{
	system("cls");
	srand(unsigned(time(NULL)));
	int ComNum = rand() % 100 + 1;
	int PlayerSel;
	cout << "1~100������ ���� �����ϰ� �������ϴ� Ȧ�̸� 1 ¦�̸� 2�� �����ּ���.\n1 or 2 :";
	cin >> PlayerSel;
	if (!(PlayerSel == 1 || PlayerSel == 2))
	{
		cout << "�߸��� �Է��Դϴ�\n";
		return;
	}
	system("cls");
	cout << "������ : " << ComNum << endl;
	switch (PlayerSel)
	{
	case 1:
		if (ComNum % 2 == 0)
			cout << "�ƽ����� Ʋ�Ƚ��ϴ�\n";
		else
			cout << "�����մϴ� �����Դϴ�\n";
		break;
	case 2:
		if (ComNum % 2 == 1)
			cout << "�ƽ����� Ʋ�Ƚ��ϴ�\n";
		else
			cout << "�����մϴ� �����Դϴ�\n";
		break;
	}
	system("pause");
}
void StartGame()
{
	int iSelect = 0;
	while (true)
	{
		system("cls");
		iSelect = SelectGame();
		switch (iSelect)
		{
		case 1:
			RPS();
			break;
		case 2:
			Sniffling();
			break;
		case 3:
			cout << "������ �����մϴ�.\n";
			return;
		default:
			cout << "�߸��� �Է��Դϴ�.\n";
			break;
		}
	}
}
int SelectGame()
{
	int iSelect = 0;
	cout << "������ ������ �������ּ��� 1. ���������� 2. Ȧ¦���� 3.������\n";
	cin >> iSelect;
	return iSelect;
}