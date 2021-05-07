#include <iostream>

using namespace std;

void main()
{
	int iBalance = 0, iSelect = 0, iPlus = 0, iCoke = 1000, iSoda = 800, iPine = 700,iDrink = 0;
	cout << "음료수 자판기 입니다 금액을 투입해주세요 ~^^~ " << endl << "금액투입 : ";
	cin >> iBalance;
	while (1)
	{
		cout << endl << "잔액 : " << iBalance << endl << endl;
		cout << "번호를 선택해주세요" << endl << endl;
		cout << "1.콜라(" << iCoke <<"원) 2.사이다(" << iSoda << "원) 3.솔의눈(" << iPine << ")원"<<endl <<"4.금액 추가 투입 5.음료 금액 변경 6. 나가기" << endl << "번호 선택 : ";
		cin >> iSelect;
		switch (iSelect)
		{
		case 1 : 
			if (iBalance >= iCoke)
			{
				cout << endl << "콜라가 나왔습니다!" << endl;
				iBalance -= iCoke;
			}
			else
			{
				cout << endl << "잔액이 " << iCoke - iBalance <<  "원 부족합니다 금액을 추가 투입해주세요 ^^" << endl;
			}
			break;
		case 2:
			if (iBalance >= iSoda)
			{
				cout << endl << "사이다가 나왔습니다!" << endl;
				iBalance -= iSoda;
			}
			else
			{
				cout << endl << "잔액이 " << iSoda - iBalance << "원 부족합니다 금액을 추가 투입해주세요 ^^" << endl;
			}
			break;
		case 3:
			if (iBalance >= iPine)
			{
				cout << endl << "솔의눈이 나왔습니다!" << endl;
				iBalance -= iPine;
			}
			else
			{
				cout << endl << "잔액이 " << iPine - iBalance << "원 부족합니다 금액을 추가 투입해주세요 ^^" << endl;
			}
			break;
		case 4:
			cout << endl << "추가 투입할 금액을 입력해주세요 " << endl << "투입 금액 : ";
			cin >> iPlus;
			iBalance += iPlus;
			break;
		case 5:
			cout << "금액을 변경하실 음료수의 번호를 선택해주세요" << endl;
			cout << "1.콜라(" << iCoke << "원)" << endl << "2.사이다(" << iSoda << "원) " << endl << "3.솔의눈(" << iPine << ")원"<< endl << "4.나가기 "<< endl;
			cin >> iDrink;
			switch (iDrink)
			{
			case 1:
				cout << "변경하실 음료의 금액을 입력해주세요 :";
				cin >> iCoke;
				cout << "금액 변경이 완료되었습니다" << endl;
				break;
			case 2:
				cout << "변경하실의 금액을 입력해주세요 :";
				cin >> iSoda;
				cout << "금액 변경이 완료되었습니다" << endl;
				break;
			case 3:
				cout << "변경하실의 금액을 입력해주세요 :";
				cin >> iPine;
				cout << "금액 변경이 완료되었습니다" << endl;
				break;
			case 4:
				cout << "금액 변경을 취소합니다 초기화면으로 돌아갑니다" << endl;
				break;
			default:
				cout << "잘못된 입력입니다 초기화면으로 돌아갑니다" << endl;
				break;
			}
			break;
		case 6:			
				cout << endl << "이용해주셔서 감사합니다 안녕히가세요 ^^7" << endl;
			return;
		default:
			cout << endl << "잘못된 번호를 선택하셨습니다 다시 입력해주세요 ^^" << endl;
			break;
		}
	}
}