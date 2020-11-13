#include<iostream>
using namespace std ;

int main()
{
    int n, rem, rev = 0 ;
    int m = n ;

    cout << "Enter a number : " ;
    cin >> n;

    while(n > 0)
    {
        rem = n % 10 ;
        n = n / 10 ;


        switch(rem)
        {
        case 1 :
            cout<<"One";
            break;
        case 2 :
            cout<<"two";
            break;
        case 3 :
            cout<<"Three";
            break;
        case 4 :
            cout<<"Four";
            break;
        case 5 :
            cout<<"Five";
            break;

        }
    rev = rev * 10 + rem ;
    }
    cout << "Rev " << rev <<endl;
    return 0 ;
}

