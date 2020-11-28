#include<iostream>
using namespace std ;

int main()
{
    int i, n, rev = 0, rem = 0, m;
    int s;
    cin >> s ;
    for(i =0 ; i < s ; i++)
    {
        cin >> n ;
        m = n ;
        while(n > 0)
        {
            rem= n%10;
            n = n / 10;
            rev = rev * 10 + rem;
        }
        if ( m == rev)
            cout << "right" << endl;
    }
    return 0;
}
