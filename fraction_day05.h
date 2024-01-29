//인터페이스 파일
//Fraction 클래스를 정의하는 fraction.h 인터페이스 파일

#include <iostream>
using namespace std;

#ifndef FRACTION_H
#define FRACTION_H

class Fraction
{
    //Data member
    private:
        int number;
        int denom; // 분모
    
    //public member function
    public:
        //생성자
        Fraction(int num, int den);
        Fraction();
        Fraction(Fraction& fract);
        ~Fraction()
        //접근자
        int getNumber() const;
        int getDenom () const;
        void print() const;
        //설정자
        void setNumber(int num);
        void setDenom(int den);
    
    // private serve member function
    private:
        void normalize();
        int gcd(int n, int m);
};
#endif