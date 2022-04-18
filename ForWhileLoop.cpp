#include <iostream>
using namespace std;

int main()
{

    // Most important thing in C++ is use of "semi-colon" without this u will get error 😥😥
    /*

       Mainly we are using for loop  and while loop but in ur syllabas there is one more that is do-while loop .

       do-while is also easy-peasy 😅😅,so don't take tension C++ is very interesting language 😁😁.

       After doing loops u should try or practice more and more problems like patterns 🙃🙃.

    */

    /*

        1. for loop

        for rolls or play around 3 conditions

        a) initiallization :- exp "int i = 1" this is called initiallization .
        b) condition :- ex "i<=5" this is called condition .
        c) increment/decrement :- ex "i++" this is called increment (i-- comes under decrement)

        ***     here i++ is equal to i = i+1
        and i-- is equal to i = i-1

        */

    cout << "This is my favorite for-loop 😎😎" << endl;
    for (int i = 1; i <= 5; i++)
    {
        cout << i << endl;
    }

    /*
        2. while loops

        while loop is little differnt in syntax but both do same work
        if u see its syntax u can understand very clearlly.
    */

    cout << "This a while loop 😏😏" << endl;
    int i = 1, j = 5;
    while (i <= j)
    {
        cout << i << endl;
        i++;
    }

    /*
           3. do-while loop
           students generally think that while and do-while are same but there isa little difference
           if condition is false in case of while loop, it stops and don't run.
           but in do-while if condition is false, it will run atleast 1 time then stop.

    */
    cout << "This is a do-while loop 🤨🤨" << endl;
    int k = 1, m = 5;
    do
    {
        cout << k << " ";
        k++;
    } while (k <= m);

    cout << endl;
    cout << "There i am writing again do-while loop but see it carefully 😃😃." int a = 1;
    do
    {
        cout << a;

    } while (a == 4);

    return 0;
}