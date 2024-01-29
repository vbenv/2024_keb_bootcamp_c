// Array 값 탐색
#include <iostream>
using namespace std;

int main()
{
	//declare
	int numArray[10] = {14, 76, 80, 33, 21, 96, 22, 88, 31, 16};
    bool found = false;
	int value;
	int index;

	//사용자가 입력한 값으로 할당
	cout << "Insert number that you need: ";
	cin >> value;


	for(int i = 0; (i < 10)&&(!found); i++)
	{
		if(numArray[i] == value)
		{
			index = i;
			found = true;
		}
	}
	if(found)
	{
		cout << "The value was found at index: " << index;
	}
	else
	{
		cout << "The value was not found.";
	}
	return 0;
}