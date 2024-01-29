#include <iostream>
using namespace std;


void hours(int minutes[], int size)
{
	for(int i = 0; i < size; i++)
	{
		minutes[i] /= 60;
	}
	return;
}

void print(const int minutes[], int size)
{
	for(int i = 0; i < size; i++)
	{
		cout << minutes[i] << " ";
	}
	cout << endl;
	return;
}

int main()
{
	int minutes[6] = {60,120,180,240,300,360};
	hours(minutes, 6);
    print(minutes, 6);
	
	return 0;
}
