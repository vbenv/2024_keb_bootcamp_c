// 정수 첫 번째 자리수 추출
// 입력된 정수의 첫 번째 자리수를 추출해서 출력

#include <iostream>
using namespace std;

int main()
{
   // set variable
   unsigned int givenInt, firstDigit;
   // input
   cout << "input +int: ";
   cin >> givenInt;
   // process
   firstDigit = givenInt % 10; // get a remainder from 10's remainder
   // output
   cout << "inputed int: " << givenInt << endl;
   cout << "extract first position: " << firstDigit << endl;
   return 0;
}