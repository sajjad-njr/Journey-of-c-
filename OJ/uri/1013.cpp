#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c, x;

    cin>>a>>b>>c;

    x = (a+b+abs(a-b))/2;

    x = (x+c+abs(x-c))/2;

    cout << x;

    return 0;
}
