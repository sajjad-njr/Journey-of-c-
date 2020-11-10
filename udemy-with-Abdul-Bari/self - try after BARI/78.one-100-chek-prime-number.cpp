// check prime number

#include<iostream>
using namespace std;

int main()
{
    int i, repit = 0;

    //cout << "\n\tEnter a number : " ;
    //cin >> number ;

    for( i = 1 ; i <=  7 ; i++)
    {
        if(7 % i == 0)
        {
            //cout << repit ;

            repit++;
        }
    }

    for( i = 1 ; i <=  7 ; i++)
    {
        if( repit == 2)
        {
            cout << "This is prime " << endl;
        }
        else
        {
            cout << "This is not prime " << endl;
        }

    }
    //cout << repit ;
    //cout << i << " This is prime" << endl;

    return 0 ;
}

