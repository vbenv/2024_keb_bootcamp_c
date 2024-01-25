//반복문 사용해서 메시지 10회 출력

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{   //선언 후 초기화.
    int score;
    int sum =0;
    double average; // score를 더블로 바꿔야 소수점 아래가 나오기 때문에 double로 선언. if, int로 선언하면, 계산한 값을 average에 저장할 때 int로 바꿔 소수점 아래를 다 없애고 계산하게됨.
    // while
    int counter = 0;
    while(counter<4) //4 반복
    {
        cout<<"input your score: ";
        cin >> score;
        sum = sum + score;
        counter++;
    }
    average = static_cast <double>(sum) / 4;  //sum or 나누는 '4' 중 하나를 double(float) 타입으로 바꿔야 묵시적 형변환이 일어나 보다 정확한 수치를 알 수 있음.
    cout << fixed << setprecision(2) << showpoint;
    cout << "average score = " << average;
    return 0;
}