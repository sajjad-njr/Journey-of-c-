#include<iostream>

using namespace std ;

int main()
{
    int a ;
    int x = 1 ;
    int num ;
    int sum = 0 ;

    while ( x <= 5)
    {
        cout << "Enter a number " << endl;
        cin >> num ;
        sum += num ;
        x++ ;

    }
    cout<<"Total sum = " << sum << endl;

    return 0 ;
}
