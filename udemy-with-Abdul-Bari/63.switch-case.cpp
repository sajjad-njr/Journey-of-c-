#include<iostream>
using namespace std ;

int main()
{
    int number ;

    cout << "Enter any number : " ;
    cin >> number ;

    switch(number)
    {
    case 1 :
        cout << "You come street : 1";
        cout << " Go tour dial : 1" << endl;

        int a ;
        cin >> a ;

        switch(a)
        {
        case 1:
            cout << " Weeks are only 7 days " << endl;

        case 2 :
            cout << "MOnth are 30 days " ;
        default :
            cout << " No problem " ;
        }
        break ;

    case 2 :
        cout << " All interest are in 1" ;
        break ;

    default :
        cout << " Sorry bro " ;
    }

    return 0 ;
}

