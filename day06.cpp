#include <iostream>
using namespace std;

int main()
{
    int score = 92;
    int&rscore = score;
    cout << score <<": score "<< endl;
    cout << rscore <<": rscore "<< endl;
    
    rscore = 50;
    cout << score <<": score "<< endl;
    cout << rscore <<": rscore "<< endl;
    return 0;
}