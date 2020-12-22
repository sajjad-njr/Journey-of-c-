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
float  sum (float o, float p)
{
    return o + p ;
}


int main()
{
    int a, b,v,k;
    float  m, n ;


    cin >> a >> b >> v;
    cin >> m >> n ;

    k = sum(a, b);

    cout << k << endl;

    cout << sum(a, b, v) << endl;

    cout << sum(m,n);

    return 0;
}
