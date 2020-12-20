#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a ;
    while(a--)
    {
        int flag = 1;
        cin >> b;
        for(int i = 1 ; i <= b ; i++)
        {
            flag = flag * i;
        }
        cout<<flag << endl;
    }
    return 0;
}
