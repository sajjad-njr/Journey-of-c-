#include<iostream>
#include<iomanip>
using namespace std ;

int main()
{
    int a, b ;
    double c,d;

    cin >> a;
    cin>>b;
    cin >> c ;

    d = b * c ;
    cout << "NUMBER" << " = " << a <<endl;
    cout << "SALARY" << " = " <<"U$ " <<fixed << setprecision(2) << d << endl;

    return 0;
}
