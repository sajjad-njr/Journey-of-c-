#include<iostream>
using namespace std ;

int main()
{
    float billAmount ;
    float discount = 0.0 ;

    cout << "Enter your amount = ";
    cin >> billAmount ;

    if (billAmount < 100)
    {
        cout << " Sorry !! a fokinni never ";
        cout << endl << "Your Bill now = " << billAmount ;

    }
    else if (billAmount > 100 && billAmount <= 500)
    {
         cout << " You got 10 % discount";
         cout << " Your Bill is = " << billAmount - ((billAmount * 10)/100) ;
    }
    else
    {
        cout << " You got 20 % discount";
         cout << " Your Bill is = " << billAmount - ((billAmount * 20)/100) ;
    }

    return 0 ;
}
