#include<iostream>
#include<iomanip>
using namespace std ;

int main()
{
    int a, m;
    cin>>a >> m;
    double c;
    if(a == 1)
        c = 4.00 * m;
    else if(a == 2)
        c = 4.50 * m;
    else if(a == 3)
        c = 5.00 * m;
    else if(a == 4)
        c = 2.00 * m;
    else if(a == 3)
        c = 1.50 * m;
    cout << "Total: R$ " <<fixed << setprecision(2) << c <<endl;

    return 0;
}

