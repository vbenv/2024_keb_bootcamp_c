//if 조건문 사용해서 절대값 출력
#include <iostream>
using namespace std;

int main()
{
    int number;

    cout << "정수를 입력하세요: ";
    cin >> number;

    if(number<0)
    {
        number = -number;
    }
    cout << number;
    return 0;
}