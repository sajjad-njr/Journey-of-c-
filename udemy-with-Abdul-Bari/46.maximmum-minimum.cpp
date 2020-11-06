#include<iostream>
using namespace std ;

int maxiMini(int x , int y )
{
    if( x > y)
    {
        cout << " The maximum value is = " << x << endl;

    }
    else
    {
        cout << " The maximum value is = " << y << endl;
    }
}

int main()
{
    maxiMini(788,9);

    return 0 ;
}
