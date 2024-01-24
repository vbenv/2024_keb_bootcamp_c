// 숫자에서 정수 부분과 소수점 아래 부분을 분리해서 추출하는 프로그램
// 주어진 부동 소수점의 정수 부분과 소수점 아래 부분을 추출해서 출력

#include <iostream>
#include <iomanip> //이게 뭐지
using namespace std;

int main()
{
    // 변수 선언
    double number;
    int intPart;
    double fractPart;
    // 입력 받기
    cout << "부동 소수점 입력: ";
    cin >> number;
    // 처리
    intPart = static_cast<int>(number);
    fractPart = number - intPart;
    // output
    cout << fixed << showpoint << setprecision(3); // 이 기능에 반올림 포함.
    cout << "원래 값: " << number << endl;
    cout << "정수 부분: " << intPart << endl;
    cout << "소수점 아래 부분: " << fractPart << endl;
    return 0;
}