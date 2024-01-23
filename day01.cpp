// 부호 없는 정수 사용하기
#include <iostream>
using namespace std;

int main()
{
    // 상수 정의
    const unsigned int pennyValue = 1;
    const unsigned int nickelValue = 5;
    const unsigned int dimeValue = 10;
    const unsigned int quarterValue = 25;
    const unsigned int dollarValue = 100;
   
    // 변수 정의(각 코인의 수)
    unsigned int pennies;
    unsigned int nickel;
    unsigned int dime;
    unsigned int quarter;
    unsigned int dollar;
   
    // 전체 값을 나타내는 변수 선언
    unsigned long totalValue;
   
   // 코인 입력받기
    cout << "페니의 수: ";
    cin >> pennies;
    cout << "니켈의 수: ";
    cin >> nickel;
    cout << "다임의 수: ";
    cin >> dime;
    cout << "쿼터의 수: ";
    cin >> quarter;
    cout << "달러의 수: ";
    cin >> dollar;
    
    // 전체 금액 계산
    totalValue = pennies * pennyValue + nickel * nickelValue + dime * dimeValue + quarter * quarterValue + dollar * dollarValue;
    
    // 결과 출력
    cout << "전체 값은 " << totalValue << "페니입니다.";
    return 0;
}