// Array 값 swap
#include <iostream>
using namespace std;

int main()
{
	//declare
	int numArray[10] = {14, 76, 80, 33, 21, 96, 22, 88, 31, 16};
    
	
	int duck =  numArray[1];
	numArray[1] = numArray[2];
	numArray[2] = duck;
	cout << numArray[1] << endl;//원래 : 76
	cout << numArray[2] << endl;//원래 : 80
	cout << duck;
	return 0;
}