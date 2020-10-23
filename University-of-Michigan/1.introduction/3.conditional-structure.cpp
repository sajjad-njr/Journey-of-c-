#include<iostream>
using namespace std ;

int main()
{
    int x ;

    cout << "\t\tEnter any number : " ;
    cin>>x;

    if(x>0)
        cout << "\n\n\t\tThe number is positive : "<< x;

    else if (x < 0)
        cout<<"\n\n\t\tThe number is negative : "<< x;

    else
        cout<<"\n\n\t\tThe number is Zero: "<< x;

    return 0 ;
}

