#include<bits/stdc++.h>

using namespace std ;

int main()
{
    int a , i = 1 ,countn = 0;
    cin >> a;
    for(i = 1 ; i <= a ; i++)
    {
        if(a%i == 0)
        {
            countn++;
            cout << i << endl;
        }
    }
    cout << endl << "total factor = " << countn ;



    return 0;
}
