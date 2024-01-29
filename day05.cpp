#include <iostream>
using namespace std;

int main()
{
    //declare
    int phoneNumber[4] = {1998, 2001, 3001, 5853}; 

	int randomPick;
	
	do
	{
		cout << "Pick your number: ";
		cin >> randomPick;
	} while (randomPick < 1 || randomPick > 4);
	// print
	cout << "your phone number is " << phoneNumber[randomPick - 1];
	cout << "."; 
	return 0;
}