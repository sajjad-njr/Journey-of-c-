#include<iostream>
using namespace std ;

int main()
{
    int x ;
    cout<<"Enter a number ";
    cin >> x;

    for(int i = 0 ; i < x ; i++)
    {
        if(i%2 == 0)
            cout << i << " ";
    }
    //cout << "i"  ;

    return 0 ;
}
