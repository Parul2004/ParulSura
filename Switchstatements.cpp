#include <iostream>
using namespace std;

int main()
{

    /*
        Switch statements
    */

    int number;
    cout << "Enter the length of your name 🤩🤩" << endl;
    cin >> number;
    switch (number)
    {
    case 3:
        cout << "aap hmesa kush rahte ho load nhi lete 🙂🙂";
        break;
    case 4:
        cout << "cool person ho aap 😎😎" << endl;
        break;
    case 5:

        cout << "kind-hearted, helping, sweet as sugar 😍😍" << endl;
        break;
    case 6:
    {
        cout << "aap helping ho 😊😊";
        break;
    }

    case 7:
        cout << "u are innocent 😀😀";
         break;
    case 8:
        cout << "u are good from heart but little bit naughty 😁😁" ;
        break;
    case 9:
        cout << "aap ghar me sabke favorite 😉😉";
         break;

    default:
        cout << "aap lajawab ho 🙃🙃" << endl;
        break;
    }
    return 0;
}