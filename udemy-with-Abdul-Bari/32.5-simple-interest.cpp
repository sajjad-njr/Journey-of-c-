#include<iostream>
using namespace std ;

int simpleInterest(int I , int T , int R);

int main()
{
    int a , b , c ;

    cout << "Enter interest ,rate time  =  " ;
    cin >> a >> b >> c ;

    float total = simpleInterest (a,b,c) ;

    cout << " Simple Interest = " << total << endl;

    return 0 ;
}

int simpleInterest(int I , int T , int R)
{
    float SI = I * ( 1 + R * T) ;

    return SI ;
}
