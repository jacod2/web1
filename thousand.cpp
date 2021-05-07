#include <iostream>
using namespace std;

void main()
{
	int iNum = 0,iThousand = 0, iHundred = 0, iTen = 0, iOne = 0;
	cout << "4자리 정수를 입력해주세요 (ex.2149)" << endl << "숫자 입력 : ";
	cin >> iNum;
	iThousand = iNum / 1000;
	iHundred = (iNum / 100) % 10;
	iTen = (iNum / 10) % 10;
	iOne = (iNum % 10);
	cout << "천의 자리는 " << iThousand << "입니다" << endl;
	cout << "백의 자리는 " << iHundred << "입니다" << endl;
	cout << "십의 자리는 " << iTen << "입니다" << endl;
	cout << "일의 자리는 " << iOne << "입니다" << endl;
}