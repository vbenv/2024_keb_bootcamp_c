#include <iostream>
#include <fstream>
using namespace std;

int main()
{   // declare
    ifstream infile;
    int num;
    bool flag;
    //open file
    infile.open("numbers.dat");
    //while sentence for finding first number higher than 150.
    flag = false; // flag 지정.
    while(infile >> num && !flag)  //인파일이 입력되고 있으면서, True일 때 실행
    {
        if(num >= 150)
        {
            cout << "finding number is " << num;
            flag = true;
        }
    }
    // check flag
    if(!flag)
    {
        cout << "there is no number what u find in the file.";
    }
    infile.close();
    return 0;
}