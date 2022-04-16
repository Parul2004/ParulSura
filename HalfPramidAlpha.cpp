// A
// B B
// C C C
// D D D D
// E E E E E

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows:" << endl;
    cin >> n;
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < i + 1; j++)
        {
            cout << char(64 + i)<<" ";
        }
        cout << endl;
    }

    return 0;
}