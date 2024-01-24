#include <iostream>
#include <limits>
using namespace std;

int main()
{
    unsigned int num1 = numeric_limits<unsigned int>::max();
    cout << num1 <<endl;
    num1 += 1;
    cout << num1;
    return 0;
}