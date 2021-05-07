#include <iostream>

using namespace std;

void main()
{
	int kor = 0, eng = 0, math = 0,avg = 0,tot = 0;
	double prt_avg = 0.f;
	
	cout << "국어 영어  수학 점수를 공백으로 구분해서 입력해주세요(0~100)" << endl;
	cin >> kor >> eng >> math;
	if (!(0 <= kor && 100 >= kor))
	{
		cout << "점수가 정해진 범위를 벗어납니다" << endl;
		return;
	}
	if (!(0 <= eng && 100 >= eng))
	{
		cout << "점수가 정해진 범위를 벗어납니다" << endl;
		return;
	}
	if (!(0 <= math && 100 >= math))
	{
		cout << "점수가 정해진 범위를 벗어납니다" << endl;
		return;
	}
	prt_avg = (kor + eng + math) / 3.0;
	avg = (kor + eng + math) / 3;
	tot = (kor + eng + math);
	cout << "국어점수는 " << kor << "점 입니다." << endl;
	cout << "영어점수는 " << eng << "점 입니다." << endl;
	cout << "수학점수는 " << math << "점 입니다." << endl;
	cout.precision(6);
	cout << "평균점수는 " << prt_avg << "점 입니다." << endl;
	cout << "총점점수는 " << tot << "점 입니다." << endl;

	cout <<endl << "if문 version" << endl;
	if (90 <= avg && 100 >= avg)
	{
		cout << "총학점은 A입니다." << endl;
	}
	else if (80 <= avg && 90 > avg)
	{
		cout << "총학점은 B입니다." << endl;
	}
	else if (70 <= avg && 80 > avg)
	{
		cout << "총학점은 C입니다." << endl;
	}
	else if (60 <= avg && 70 > avg)
	{
		cout << "총학점은 D입니다." << endl;
	}
	else
	{
		cout << "총학점은 F입니다." << endl;
	}

	cout << endl << "switch문 version" << endl;

	switch (avg/10)
	{
	case 10:
	case 9:
		cout << "총학점은 A입니다." << endl;
		break;
	case 8:
		cout << "총학점은 B입니다." << endl;
		break;
	case 7:
		cout << "총학점은 C입니다." << endl;
		break;
	case 6:
		cout << "총학점은 D입니다." << endl;
		break;
	default :
		cout << "총학점은 F입니다." << endl;
	}
	cout << endl;
}