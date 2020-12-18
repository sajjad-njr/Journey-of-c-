#include<bits/stdc++.h>
using namespace std ;

int re(int a)
{
    if(a==1)
    {
        return 1;
    }

    return a * re(a-1);
}

int main()
{
    int t, a ;
    cin >> t;

    while(t--)
    {
        //int m ;
        cin >> a;
        //m = re(a);

        cout << re(a) << endl;
    }

    return 0;
}
