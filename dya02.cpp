/* 초 단위 시간을 시, 분, 초 단위로 나누어서 변환하기


#include <iostream>
using namespace std;

int main()
{
   // set variable
   unsigned long duration, hours, minutes, seconds;
   // input
   cout << "input int(time) shaped second: ";
   cin >> duration;
   // proccess
   hours = duration / 3600L;
   minutes = (duration - (hours * 3600L))/ 60L;
   seconds = duration -(hours * 3600L) - (minutes * 60);
   // output
   cout << "time shaped second: " << endl;
   cout << "results: ";
   cout << hours << "hours ";
   cout << minutes << "minutes ";
   cout << seconds << "seconds";
   return 0;
}
*/
// 평균과 분산 구하기
// 세 개의 숫자를 받아 전체 평균을 구한 뒤 각각의 분산을 구하는 프로그램
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // set variable
    int num1, num2, num3;
    int sum;
    double average;
    double dev1, dev2, dev3;
    // input
    cout << "input first number: ";
    cin >> num1;
    cout << "input second number: ";
    cin >> num2;
    cout << "input third number: ";
    cin >> num3;
    // process
    sum = num1 + num2 + num3;
    average = static_cast<double>(sum) / 3;
    dev1 = num1 - average;
    dev2 = num2 - average;
    dev3 = num3 - average;
    // output
    //cout << fixed << setprecision(2); // 이게 없으면 유효숫자 6자리만 표현된다. 그 아래의 값들은 반올림 또는 지수로 표현.
    cout << "sum: " << sum << endl;
    cout << "average: " << average << endl;
    cout << "first number's deviation: " << dev1 << endl;
    cout << "second number's deviation: " << dev2 << endl;
    cout << "third number's deviation: " << dev3 << endl;
    return 0;
}