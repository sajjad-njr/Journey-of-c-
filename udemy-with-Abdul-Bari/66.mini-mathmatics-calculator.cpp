#include<iostream>
using namespace std ;

int main()
{
    cout << " Choice one option : " ;
    cout <<"\n1.Add" << "\nSub" << "\nMul" << "\ndiv\n" ;

    int option ;

    cout << " Enter a option number : " ;
    cin >> option ;

    int a, b, c ;
    cout << "\nEnter a number : ";

         cin >> a ;

    cout << "\nEnter a number : " ;

         cin >> b ;

    switch(option)
    {
    case 1 :
        c = a + b ;
        break ;
    case 2 :
        c = a - b ;
        break ;
    case 3 :
        c = a * b ;
        break ;

    case 4 :
        c = a / b;

        break;

    default :
        cout << "\n!! Worng intput ";

    }
    cout << " Your result is = " << c << endl;
    return 0 ;
}
