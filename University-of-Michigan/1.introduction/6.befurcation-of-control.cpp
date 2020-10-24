#include<iostream>

using namespace std ;

int main()
{
    int n ;

    for( n = 0 ; n < 10 ; n++)
    {
        if(n == 5)
            continue ;
        cout << "\n\t" <<n << " , ";

        if(n == 9)
        {
            cout << "\n" << "Count down aborted ! " ;
            break ;
        }
    }
    return 0 ;
}

