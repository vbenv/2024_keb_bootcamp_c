//반복문 사용해서 메시지 10회 출력

#include <iostream>
using namespace std;

int main()
{   //카운터 선언 후 초기화.
    int counter = 0;
    // while
    while(counter<10) //10회 반복
    {
        cout<<"hello" << endl;
        counter++;
    }
    return 0;
}