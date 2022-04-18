#include <iostream>
using namespace std;

int main()
{
    /*

        Operators in C++ :-

        1. Arthemetic operators
        2. Comparison operators
        3. Logical operators
        4. Assignment operators
        5. Bitwise operators



    */

    int a = 1;
    int b = 2;
    cout << "Let's learn about operators in C++: " << endl;

    /*
        1. Arithemetic operators

        These are some arithemetic operators :-
        a) "+"
        b) "-"
        c) "*"
        d) "/"
        e) "%"

        f)  Pre-increment :- The function "++a", will first increment it by one and then print its value.
        g)  Pre-decrement :- The function "--a", will first decrement it by one and then print its value.

        h) Post -increment :- The function "a++" will first print the value of a and then increment it by 1.


        i) Post -decrement :- The function "a--", will first print the value of a and then decrement it by 1.


    */
    cout << "The value of a + b is " << a + b << endl;
    cout << "The value of a - b is " << a - b << endl;
    cout << "The value of a * b is " << a * b << endl;
    cout << "The value of a / b is " << a / b << endl;
    cout << "The value of a % b is " << a % b << endl;

    // "%" -> this is called modulas operators

    /*
     2. Comparison operators

     These are some Comparison operators :-
     a) ">"  --> this is greater than
     b) "<"  --> this is less than
     c) "<=" --> this is less than equal to
     d) ">=" --> this is greater than equal to
     e) "==" --> this is equal to
     f) "!=" --> this is not equal to

     */

    // Use brackets here otherwise complier will give you error
    cout << "The value of a > b is " << (a > b) << endl;
    cout << "The value of a < b is " << (a < b) << endl;
    cout << "The value of a >= b is " << (a >= b) << endl;
    cout << "The value of a <= b is " << (a <= b) << endl;
    cout << "The value of a == b is " << (a == b) << endl;
    cout << "The value of a != b is " << (a != b) << endl;

    /*
          3. Logical Operators

          There are 3 logical operators :-
          a) && -> "and" logical operator
          b) || -> "or" logical operator
          c) ! -> "not" logical operator

** In logical operators true = 1 and false = 0

    */

    cout << "The value of ((a <= b) && (a>=b)) is " << ((a <= b) && (a >= b)) << endl;
    cout << "The value of (!(a == b)) is " << (!(a == b)) << endl;
    cout << "The value of ((a != b) || (a<=b)) is " << ((a != b) || (a <= b)) << endl;


    /*
     4. Assignment Operators :-
    ** assignment basically means we are assinging or giving value to a variable by using "=" this symbol 
    ** don't be confuse "=" this with equal to operator (for equal to u have to use "==" )

    */

    return 0;
}