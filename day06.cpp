// 힙에 동적으로 래기드 배열을
// 할당해서 이항계수를 찾는 프로그램
// 각 행에 할당된 메모리 위치는 행의 수보다 1만큼 큼
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //선언
    int maxPower = 10;
    int n;
    //입력 유효성 검사
    do
    {
        cout << "(x + y)^n에서 n을 입력하세요 ";
        cin >> n;
    } while (n < 0 || n > maxPower);
    //힙에 동적으로 할당.
    int** pascal = new int*[n + 1];
    for(int i = 0; i < n+1; i++)
    {
        pascal[i] = new int[i];
    }
    //이항계수 구하기
    for(int i = 0; i <= n; i++)
    {
        for(int j = 0; j < i + 1; j++)
        {
            if(j == 0||i == j)
            {
                pascal[i][j] = 1;
            }
            else
            {
                pascal[i][j] = pascal[i - 1][j -1 ] + pascal[i -1][j];
            }
        }
    }
    //이항계수 출력
    cout << "(x+y)^" << n << "의 이항계수: ";
    for(int j = 0; j<= n; j++)
    {
        cout << setw(5) << pascal[n][j];
    }
    cout << endl;
    //힙에서 제거
    for(int i = 0; i < n+1; i++)
    {
        delete pascal[i];
    }
    delete[] pascal;
    return 0;
}