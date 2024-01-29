// 병렬 배열 사용하기
#include <iostream>
#include <iomanip>
using namespace std;

void findGrades(const int scores[], char grades[], int size) // 함수(자료형 배열명[], 자료형 사이즈
{
	char temp[] = {'f', 'f', 'f','f', 'f', 'f','d', 'c', 'b', 'a'};
	for(int i = 0; i < size; i++)
	{
		grades[i] = temp[scores[i]/10];
	}
	return ;
}
int main()
{
	string names[3] = {"George", "ben", "tim"};
	int scores[3] = {82,73,94};
	char grades[3];
	//함수 호출
	findGrades(scores, grades, 3);
	//배열 3개의 값 출력
	for(int i = 0; i < 3; i++)
	{
		cout << setw(10) << left << names[i] << "   " << setw(2);
		cout << scores[i] << "    " << setw(2) << grades[i] << endl;
	}
	return 0;
}