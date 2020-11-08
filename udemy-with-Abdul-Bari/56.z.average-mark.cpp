#include<iostream>
using namespace std ;

int main()
{
    int a , b, c ;

    a = 75;
    b = 91 ;
    c = 99 ;

    float  totalCgpa = ( a + b + c) / 3 ;

    cout << "Total CGPA = " << totalCgpa << endl;

    if( totalCgpa > 60 )
    {
        cout << " you got : A  class and your total Mark = " << totalCgpa << endl;
    }

    if( totalCgpa > 50 &&  totalCgpa  < 60 )
    {
        cout << " you got : B class and your total Mark = " << totalCgpa << endl;
    }

    else
    {
        cout << " Your are fail" << endl;
    }

    return 0 ;
}

