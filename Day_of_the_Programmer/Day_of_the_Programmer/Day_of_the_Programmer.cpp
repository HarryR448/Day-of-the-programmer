#include "stdafx.h"

using std::cin;
using std::cout;
using std::endl;
int Gregorian(int y);
int Julian(int y);

int main() {
	int y;
	cout << "Please input a year to display the date of the year of the programmer on. Leap years are accommodated for." << endl
		<< "If input is between 1917 and 1700 result will be shown according to the standards of the Julian calender." << endl
		<< "Otherwise if the inputted year is above 1917 the output will be according to the standards of the Gregorian calender." 
		<<"The year 1918's date is different due to the switch from Julian calander to Gregorian calander. Try it out!"<<endl;
	cin >> y;

	if (y <= 1917 && y >= 1700)
	{
		cout << Julian(y) << ".09." << y << endl;
	}

	else if (y >= 1919)
	{
		cout << Gregorian(y) << ".09." << y << endl;
	}
	else if (y == 1918)
	{
		cout << "25.09.1918" << endl;
	}
	system("PAUSE");
	return 0;
}

int Gregorian(int y)
{
	int f;
	if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
	{
		f = 29;
	}
	else
	{
		f = 28;
	}
	int answer = 256 - (31 + f + 31 + 30 + 31 + 30 + 31 + 31);
	return answer;
}

int Julian(int y)
{
	int f;
	if (y % 4 == 0)
	{
		f = 29;
	}
	else
	{
		f = 28;
	}
	int answer = 256 - (31 + f + 31 + 30 + 31 + 30 + 31 + 31);
	return answer;
}
