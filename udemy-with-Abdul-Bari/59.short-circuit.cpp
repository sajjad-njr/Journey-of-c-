#include<iostream>

using namespace std ;

int main()
{
    int a = 90 ;
    int b = 100 ;
    int i = 9 ;

  // not work

   // if(a > b && ++i < b)
       // cout << " The sum = " << i ;

    if(a < b && ++i < b)
        cout << " The sum = " << i ;

    return 0 ;
}
