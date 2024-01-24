//switch 조건문
//요일 출력
#include <iostream>
using namespace std;

int main()
{
    // 변수 선언
    int day;
    //input
    cout << "0~6 input int: ";
    cin >> day;
    // switch 
    switch(day)
    {
        case 0: cout << "sunday" << endl;
        case 1: cout << "monday" << endl;
        case 2: cout << "tuesday" << endl;
        case 4: cout << "thursday" << endl;
        case 5: cout << "friday" << endl;
        case 6: cout << "saturday" << endl;
    }// exit switch phrase
    return 0;
}
