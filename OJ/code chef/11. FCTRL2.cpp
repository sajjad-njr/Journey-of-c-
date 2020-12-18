#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int t, a ;
    cin >> t;

    while(t--)
    {
        int m = 1, fact = 1 ;
        cin >> a;
        for(int i =  1 ; i < a ; i++)
        {
            m = fact *( a - i);
        }

        cout << m << endl;
    }

    return 0;
}
