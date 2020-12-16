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
   // total number factor count
    //cout << endl << "total factor = " << countn ;

    if(countn == 2)
        cout << "The number is prime " << endl;
    else
         cout << "The number is not prime " << endl;


    return 0;
}
