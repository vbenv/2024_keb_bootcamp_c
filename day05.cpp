#include <iostream>
using namespace std;

int main()
{
	//declare
    int numbers[10] = {2,2,3,4,5,6,1,2,3,3}; // 배열 선언

	double average; // 합계 변수 선언
	int sum = 0; // sum 초기화
	for(int i = 0; i < 10; i++) // 0<i<10 -> 10개
	{
		sum += numbers[i];
	}
	average = static_cast<double>(sum) / 10; // static_cast<바꿀 자료형>(대상)
	//int sum -> double sum으로 바꾸는 까닭은 10으로 나눴을 때
	//좀 더 정확한 값을 출력하는 float형으로 바꾸기 위함
	cout << average;
	return 0;
}