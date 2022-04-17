#include <iostream>
using namespace std;

int main()
{
    /*

         cout:- is used in C++ to print something, as we can simply say it gives us output.
         "<<" :-this is an Insertion operator
         cin :- i used to take input from the user.
          ">>" :-this is an Extraction operator

    */

    //  Write a program of swaping of two numbers (user will give the input)

    int num1, num2, temp;
    cout<<"Enter first number "<<endl;
    cin>>num1;
    cout<<"Enter second number "<<endl;
    cin>>num2;
    temp = num1;
    num1 = num2;
    num2 = temp;
    cout<<"Your first number is "<<num1<<endl;
    cout<<"Your second number is "<<num2<<endl;

    return 0;
}