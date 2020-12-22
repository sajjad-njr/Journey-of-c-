#include<bits/stdc++.h>
using namespace std;

int maxi(int a = 0, int b = 0, int c = 0)
{
    return a > b && a > c ? a:(b>c ? b : c);
}

int main()
{
    cout<<maxi() << endl;
    return 0;
}
