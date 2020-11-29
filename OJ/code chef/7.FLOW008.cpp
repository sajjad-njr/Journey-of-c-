#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n , t ;
    cin >> n ;

    while(n--)
    {
        cin>> t;

        if( t < 10)
            cout << "Thanks for helping Chef!" << endl;
        else
            cout << "-1" << endl;
    }

    return 0;
}
