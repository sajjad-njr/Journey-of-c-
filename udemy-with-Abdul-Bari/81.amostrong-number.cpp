#include<iostream>
using namespace std ;

int main()
{
    int number, rem ;

    cout << " Enter a number a : ";
    cin >> number ;
    int m = number ;
    int sum = 0 ;

    while(number > 0)
    {
        rem = number % 10;

        number /= 10 ;
        sum = sum + rem * rem * rem ;
        cout << rem ;
    }

    if(sum == m)
        cout << "This is amstrong";
    else
        cout << " no" ;

    return 0 ;
}
