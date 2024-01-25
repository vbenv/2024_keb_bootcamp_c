#include <iostream>
using namespace std;

int main()
{
    int day;
    cout << "0~6 범위의 정수를 입력하세요: ";
    cin >> day;
    switch(day)
    {
        case 0: cout << "sunday" << endl;
                cout << "한 주의 첫 번째 요일입니다." << endl;
                break;
        case 1: cout << "monday" << endl;
                cout << "한 주의 2 번째 요일입니다." << endl;
                break;
        case 2: cout << "tuesday" << endl;
                cout << "한 주의 3 번째 요일입니다." << endl;
                break;
        case 3: cout << "wednesday" << endl;
                cout << "한 주의 4 번째 요일입니다." << endl;
                break;
        case 4: cout << "thursday" << endl;
                cout << "한 주의 5 번째 요일입니다." << endl;
                break;
        case 5: cout << "friday" << endl;
                cout << "한 주의 6 번째 요일입니다." << endl;
                break;
        case 6: cout << "saturday" << endl;
                cout << "한 주의 7 번째 요일입니다." << endl;
                

    }
    return 0;
}