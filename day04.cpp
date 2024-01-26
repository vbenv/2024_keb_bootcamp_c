//클래스와 생성자
//3개의 랜덤한 숫자를 정의하고 만들기

// 주어진 범위의 랜덤한 숫자를 생성하는 클래스를 선언, 정의하고 사용하는 프로그램
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// RandomInteger 클래스의 정의
// (데이터 멤버 선언과 멤버 함수 정의)
class RandomInteger
{
    private:
        int low;
        int high;
        int value;
    public:
        RandomInteger(int low, int high); // 생성자
	~RandomInteger();    // 소멸자
	    //합성 복사 생성자의 생성 막기
		RandomInteger(const RandomInteger& random) = delete;   // 복사 생성자가 생성되는 시점이 오면, 호출됨 그 영역에서 복사 생성자를 만들고 싶지 않아서 만듦
		void print() const; //접근자 멤버 함수
};
//randominteger 클래스의 생성자, 소멸자, 접근자 멤버 함수 정의
//생성자
RandomInteger::RandomInteger(int lw, int hh)
:low(lw), high(hh)
{
	srand(time(0));
	int temp = rand();
	value = temp % (high - low + 1) + low;
}
//소멸자
RandomInteger::~RandomInteger()
{
}
//접근자 멤버 함수
void RandomInteger::print() const
{
	cout << value << endl;
}
//랜덤 숫자 객체를 인스터스화하고 값을 출력하는 애플리케이션
int main()
{
	//100~200 범위 랜덤 숫자 생성
	RandomInteger r1(100, 200);
	cout << "100~200 random number: ";
	r1.print();
	// 400~600 number
	RandomInteger r2(400, 600);
	cout << "400~600 random number: ";
	r2.print();
	return 0;
}
