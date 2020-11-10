/*Factor of number  */

//and some of factor

#include<iostream>
using namespace std ;

int main()
{
    int number , i ;
    int sum(0);
    cout << " Enter a number : ";
    cin >> number ;

    // key : number % i == o

    for( i = 1 ; i <= number ; i++)
    {
        if(number % i == 0)
        {
            cout << i << " " ;
            sum = sum + i ;
        }
    }
    cout<<"\n\nThe sum of all factors = " << sum << endl;
    return 0 ;
}
