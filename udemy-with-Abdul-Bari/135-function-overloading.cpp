#include<bits/stdc++.h>
using namespace std ;

int sum (int q, int e)
{
    return q + e;
}
int sum (int q, int e, int y )
{
    return q + e + y;
}


int main()
{
    int a, b,v,k;

    cin >> a >> b >> v;

    k = sum(a, b);

    cout << k << endl;

    cout << sum(a, b, v) << endl;


    return 0;
}
