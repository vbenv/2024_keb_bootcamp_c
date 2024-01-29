//Fraction 클래스의 멤버 함수들을 정의하는 fraction.cpp 인터페이스 파일

#include <iostream>
#include <cmath>
#include <cassert>
#include "fraction.h"
using namespace std;

//매개변수 있는 생성자는
//불변 속성에 따라 분자와 분모 값 받고
//약분하여 분수 객체 생성

Fraction::Fraction(int num, int den = 1)
: numer(num), denom(den)
{
    normalize();
}
//기본 생성자는 0/1을 생성
// 별도의 유효성 검사가 필요하지 않음
Fraction::Fraction()
: number(0), denom(1)
{   
}
