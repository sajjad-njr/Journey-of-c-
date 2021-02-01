#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;

    int x = (a+b+abs(a-b))/2;
    //cout << ab;
    int abc = (x+c+abs(x-c))/2;
    cout << abc;

   // cout << a << b ;


}
