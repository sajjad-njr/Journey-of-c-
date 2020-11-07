#include<iostream>
using namespace std ;


float marks(int m1, int m2, int m3)
{
    float avg =  (m1 + m2 + m3) /3 ;

    return avg ;
}

int main()
{
    int a , b, c ;

    a = 70;
    b = 90 ;
    c = 99 ;

    float totalCgpa = marks(a,b,c);

    cout << "Total CGPA = " <<totalCgpa << endl;

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
