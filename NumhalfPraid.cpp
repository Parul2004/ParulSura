// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of rows: "<<endl;
    cin>>n;
    for (int i = 1; i < n+1; i++)
    {
        for (int j = 1; j < i+1; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}