#include <iostream>
using namespace std;

int main()
{
    // Here we are solving many pattern problems by Switch statement 😀😀

    int number;
    cout << "Enter a number then we will show u a pattern picture 😎😎" << endl;
    cin >> number;

    switch (number)
    {
    case 1:
    {
        /*

        Write a program in C++ to print a square pattern with # character.
        for-expample : n = 4
        then we will get
                             # # # #
                             # # # #
                             # # # #
                             # # # #

        */

        int n;
        cout << "Enter the number of rows" << endl;
        cin >> n;
        for (int i = 1; i < n + 1; i++)
        {
            for (int j = 1; j < n + 1; j++)
            {
                cout << "# ";
            }
            cout << endl;
        }

        break;
    }
    case 2:
    {
        /*
         Write a program in C++ to display the pattern like right angle triangle using an asterisk.
            Sample Output:
            Input number of rows: 5
             *
             **
             ***
             ****
             *****

         */

        int n;
        cout << "Enter the number of rows" << endl;
        cin >> n;
        for (int i = 1; i < n + 1; i++)
        {
            for (int j = 1; j < i + 1; j++)
            {
                cout << "*";
            }
            cout << endl;
        }

        break;
    }
    case 3:
    {
        /*
        Write a program in C++ to display the pattern like right angle triangle with number.
           Sample Output:
           Input number of rows: 5
           1
           12
           123
           1234
           12345

         */

        int n;
        cout << "Enter the number of rows" << endl;
        cin >> n;
        for (int i = 1; i < n + 1; i++)
        {
            for (int j = 1; j < i + 1; j++)
            {
                cout << j;
            }
            cout << endl;
        }

        break;
    }
    case 4:
    {
        /*
        Write a program in C++ to make such a pattern like right angle triangle using number
        which will repeat the number for that row.
            Sample Output:
            Input number of rows: 5
            1
            22
            333
            4444
            55555

         */

        int n;
        cout << "Enter the number of rows" << endl;
        cin >> n;
        for (int i = 1; i < n + 1; i++)
        {
            for (int j = 1; j < i + 1; j++)
            {
                cout << i;
            }
            cout << endl;
        }

        break;
    }
    case 5:
    {
        /*
         Write a program in C++ to make such a pattern
         like right angle triangle with number increased by 1.
            Sample Output:
            Input number of rows: 4
            1
            2 3
            4 5 6
            7 8 9 10

         */

        int n;
        int k = 1;
        cout << "Enter the number of rows" << endl;
        cin >> n;
        for (int i = 1; i < n + 1; i++)
        {
            for (int j = 1; j < i + 1; j++)
            {
                cout << k << " ";
                k++;
            }
            cout << endl;
        }

        break;
    }
    case 6:
    {
        /*
          Write a program in C++ to make such a pattern like a pyramid with numbers increased by 1.
          Sample Output:
            Input number of rows: 4
                   1
                  2 3
                 4 5 6
                7 8 9 10

         */

        int n;
        int k = 1;
        cout << "Enter the number of rows" << endl;
        cin >> n;
        for (int i = 1; i < n + 1; i++)
        {
            for (int j = 1; j <= n - i + 1; j++)
            {
                cout << " ";
            }

            for (int j = 1; j < i + 1; j++)
            {
                cout << k << " ";
                k++;
            }
            cout << endl;
        }

        break;
    }
    case 7:
    {
        /*
           Write a program in C++ to make such a pattern like a pyramid with an asterisk.
           Sample Output:
           Input number of rows: 5
             *
            * *
           * * *
          * * * *
         * * * * *

         */

        int n;

        cout << "Enter the number of rows" << endl;
        cin >> n;
        for (int i = 1; i < n + 1; i++)
        {
            for (int j = 1; j <= n - i + 1; j++)
            {
                cout << " ";
            }

            for (int j = 1; j < i + 1; j++)
            {
                cout << "*"
                     << " ";
            }
            cout << endl;
        }

        break;
    }
    case 8:
    {
        /*
          Write a program in C++ to make such a pattern like a pyramid using number and
          a number will repeat for a row.
          Sample Output:
          Input number of rows: 5
               1
              2 2
             3 3 3
            4 4 4 4
           5 5 5 5 5

         */

        int n;

        cout << "Enter the number of rows" << endl;
        cin >> n;
        for (int i = 1; i < n + 1; i++)
        {
            for (int j = 1; j <= n - i + 1; j++)
            {
                cout << " ";
            }

            for (int j = 1; j < i + 1; j++)
            {
                cout << i << " ";
            }
            cout << endl;
        }

        break;
    }
    case 9:
    {
        /*
            Write a program in C++ to display the pattern like a pyramid using asterisk
            and each row contain an odd number of asterisks.
            Sample Output:


           Input number of rows: 5

             *
            ***
           *****
          *******

         */

        int n;

        cout << "Enter the number of rows" << endl;
        cin >> n;
        for (int i = 1; i < n + 1; i++)
        {
            for (int j = 1; j <= n - i + 1; j++)
            {
                cout << " ";
            }

            for (int j = 1; j <= 2 * i - 1; j++)
            {
                cout << "*";
            }
            cout << endl;
        }

        break;
    }
    case 10:
    {
        /*
                1
              2 3 2
            3 4 5 4 3
          4 5 6 7 6 5 4
        5 6 7 8 9 8 7 6 5

         */

        int n;
        cout<<"Enter the number of rows \n";
        cin >> n;
        for (int i = 1; i < n + 1; i++)
        {
            for (int j = 1; j < n - i + 1; j++)
            {
                cout << "  ";
            }
            for (int j = 1; j < i + 1; j++)
            {
                cout << i + j - 1 << " ";
            }
            for (int j = i - 1; j > 0; j--)
            {

                cout << i + j - 1 << " ";
            }
            cout << endl;
        }

        break;
    }
    case 11:
    {
        /*
              * * * * * * * * *
                * * * * * * *
                  * * * * *
                    * * *
                      *


         */

        int n;
        cout<<"Enter the number of rows \n";
        cin >> n;
        for (int i = n; i > 0; i--)
        {
            for (int j = n - i + 1; j > 0 ; j--)
            {
                cout << "  ";
            }
            for (int j = 2*i-1; j > 0 ; j--)
            {
                cout << "*" << " ";
            }
            
            for (int j = 1; j < i-4 ; j++)
            {
                cout << "*" << " ";
            }
            
            cout << endl;
        }

        break;
    }
    case 12:
    {
      /*
                 *
                **
               ***
              ****
             *****
            ******
           *******
          ********
           *******
            ******
             *****
              ****
               ***
                **
                 *

*/


    int n = 8;
    cout<<"Enter the number of rows \n"<<endl;
    cin>>n;
    for (int i = 0; i < n+1; i++)
    {
        for (int j = 1; j <= n-i+1; j++)
        {
            cout<<" ";
        }
        for (int j = 1; j < i+1; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    for (int i = n-1; i > 0; i--)
    {
        for (int j = n-i+1; j > 0; j--)
        {
            cout<<" ";
        }
        for (int j = i; j >0 ; j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }

        break;
    }

    default:
        cout << "aap kirpya mje kijye aur dobara try kre 😅😅";
        break;
    }
    return 0;
}