#include<bits/stdc++.h>
using namespace std;

int maxi(int a = 0, int b = 0, int c = 0)  // if u do not default value zero here its not work
{
    return a > b && a > c ? a:(b>c ? b : c);
}

int main()
{
    cout<<maxi()<< endl;
    cout<<maxi(89)<< endl;
    cout<<maxi(3,4)<< endl;
    cout<<maxi(34,2,1)<< endl;
    return 0;
}
