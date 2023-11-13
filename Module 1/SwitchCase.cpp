#include <iostream>
using namespace std;

int main()
{
    // For the complexity of using multiple if-else , it is easy to use switch case;

    // int x;
    // cin >> x;
    /*
    switch (x)
    {
        case 1: cout<<"one";
        break;
        case 2: cout<<"two";
        break;
        case 3: cout<<"three";
        break;
        case 4: cout<<"four";
        break;

    default: cout<<"Out of Range";
        break;
    }
    */

    // condition in switch case
    /*
     switch (x % 2)
     {
     case 0:
         cout << "Even";
         break;
     case 1:
         cout << "Odd";
         break;
     }
    */

    // Checking vowel

    char x;
    cin >> x;
    
    
    switch (x)
    {
    case 'a':
        cout << "vowel";
        break;
    case 'e':
        cout << "vowel";
        break;
    case 'i':
        cout << "vowel";
        break;
    case 'o':
        cout << "vowel";
        break;
    case 'u':
        cout << "vowel";
        break;

    default:
        cout << "Consonant" << endl;
        break;
    }

    return 0;
}