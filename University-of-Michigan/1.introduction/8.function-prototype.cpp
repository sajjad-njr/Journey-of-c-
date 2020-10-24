#include<iostream>

using namespace std ;

int sum(int a , int b , int c) ;

int main()
{
    int m ;//= 10000;

    int n ;//= 495483 ;

    int o ;

    int k ;

    cout << "Enter two number : " ;

    cin >> m >> n >> o;



    k = sum(m ,n, o) ;

    cout<< "Total sum = " << k <<endl;

    return 0 ;
}

int sum(int a , int b , int c )
{
    int add = a + b  + c;

    return add ;
}
