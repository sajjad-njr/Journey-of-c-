#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int n, i , d, m, x;
    cin>> n;

    while(n--)
    {
        cin >> d >> m ;
        x = d * m;
        int sum = 0;
        for(i = 1  ; i <= x ; i++ )
        {
            sum = sum + i ;

        }
          cout << sum << endl;
    }

    return 0;
}
