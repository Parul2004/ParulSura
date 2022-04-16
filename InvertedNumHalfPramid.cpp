// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
for (int i = n; i > 0; i--)
{
    for (int j = 1; j < i+1; j++)
    {
        cout<<j<<" ";
    }
    cout<<endl;
}

    return 0;
}