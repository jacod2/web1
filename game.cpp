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
	cout << "가위바위보 게임을 시작합니다.\n번호를 입력해주세요(1.가위 2.바위 3.보) : ";
	cin >> MySel;
	if (!(MySel == 1 || MySel == 2 || MySel == 3))
	{
		cout << "잘못된 입력입니다";
		return;
	}
	srand(unsigned(time(NULL)));
	int ComSel = (rand() % 3) + 1;
	system("cls");
	switch (ComSel)
	{
	case 1:
		cout << "컴퓨터는 가위 입니다\n";
		break;
	case 2:
		cout << "컴퓨터는 바위 입니다\n";
		break;
	case 3:
		cout << "컴퓨터는 보 입니다\n";
		break;
	}
	switch(MySel)
	{
	case 1:
		if (ComSel == 1)
		{
			cout << "무승부\n";
		}
		else if (ComSel == 2)
		{
			cout << "컴퓨터의 승리\n";
		}
		else
		{
			cout << "플레이어의 승리\n";
		}
		break;
	case 2:
		if (ComSel == 2)
		{
			cout << "무승부\n";
		}
		else if (ComSel == 3)
		{
			cout << "컴퓨터의 승리\n";
		}
		else
		{
			cout << "플레이어의 승리\n";
		}
		break;
	case 3:
		if (ComSel == 3)
		{
			cout << "무승부\n";
		}
		else if (ComSel == 1)
		{
			cout << "컴퓨터의 승리\n";
		}
		else
		{
			cout << "플레이어의 승리\n";
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
	cout << "1~100사이의 수가 랜덤하게 뽑혔습니다 홀이면 1 짝이면 2를 눌러주세요.\n1 or 2 :";
	cin >> PlayerSel;
	if (!(PlayerSel == 1 || PlayerSel == 2))
	{
		cout << "잘못된 입력입니다\n";
		return;
	}
	system("cls");
	cout << "정답은 : " << ComNum << endl;
	switch (PlayerSel)
	{
	case 1:
		if (ComNum % 2 == 0)
			cout << "아쉽지만 틀렸습니다\n";
		else
			cout << "축하합니다 정답입니다\n";
		break;
	case 2:
		if (ComNum % 2 == 1)
			cout << "아쉽지만 틀렸습니다\n";
		else
			cout << "축하합니다 정답입니다\n";
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
			cout << "게임을 종료합니다.\n";
			return;
		default:
			cout << "잘못된 입력입니다.\n";
			break;
		}
	}
}
int SelectGame()
{
	int iSelect = 0;
	cout << "실행할 게임을 선택해주세요 1. 가위바위보 2. 홀짝게임 3.나가기\n";
	cin >> iSelect;
	return iSelect;
}