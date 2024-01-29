#include <iostream>
using namespace std;

int main()
{
    //declare
    int numberOfDays[13] = {0, 31, 28, 31, 30, 31, 30,
                            31, 31, 30, 31, 30, 31}; 
							//0을 띄워서 1~12월까지 입력받음.
	int month;
	
	do // 사용자에게 달을 입력받아야 하므로 do-while
	{
	    cout << "input month(1~12): ";
		cin >> month;
	} while (month < 1 || month > 12); // d
	cout << "this month " << numberOfDays[month];
	cout << "days";
	return 0;
}