#include<iostream>
#include<iomanip>

using namespace std ;

int main()
{
    double n=3.14159,A=0,R;

    cin >>R ;
    A = n *(R*R );

    cout <<"A="<<fixed<<setprecision(4)<<A<<endl;
    return 0 ;
}

