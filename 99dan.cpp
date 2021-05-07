#include <iostream>

using namespace std;

void main() 
{
	int iNum = 1,iNum_first = 2,iNum_second = 1;
	cout << "구구단 2단을 출력합니다" << endl;
	while (9 >= iNum)
	{
		cout << "2 * " << iNum << " = " << 2 * iNum << endl;
		iNum++;
	}
	cout << endl << "구구단을 2단 부터 9단까지 출력합니다" << endl;
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