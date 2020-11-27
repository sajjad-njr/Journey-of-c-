#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int n, in = 0, de = 0;

    cin >> n ;

    if(n%4 == 0 )
    {
        in = n + 1;
        cout << in << endl;
    }
    else
    {
        de = n - 1;
        cout << de << endl;
    }
    return 0;
}
