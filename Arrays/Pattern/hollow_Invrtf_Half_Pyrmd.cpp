#include <iostream>
using namespace std;

int main()
{
    int n = 10;

    for (int row = 1; row <= n; row++)
    {

        if (row == 1 || row == n)
        {
            // stars
            for (int col = 1; col <= n - row + 1; col++)
            {
                cout << "*";
            }
        }
        else
        {
            cout << "*";
            for (int col = 1; col <= n - row - 1; col++)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
}