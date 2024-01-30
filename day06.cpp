#include <iostream>
using namespace std;

int main()
{
    int numbers[5] = {10, 2, 3, 5, 1};
    cout << numbers<<endl; // 배열의 명만 호출하면 배열의 주소가 호출
    cout << numbers+1<<endl;
    
    cout << *(numbers)<<endl;
    cout << *(numbers+4)<<endl;
    cout << numbers+4 << endl;
    cout << &*(numbers+4)<<endl;
    return 0;
}