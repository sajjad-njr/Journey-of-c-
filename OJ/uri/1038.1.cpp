#include<iostream>
#include<iomanip>
using namespace std ;

int main()
{
    int a , m;
    cin>>a >> m;
    if(a == 1)
    {
         cout << "Total: R$ " <<fixed << setprecision(2) << 4.00 * m <<endl;
    }
    else if(a == 2)
    {
       cout << "Total: R$ " <<fixed << setprecision(2) << 4.50 * m <<endl;
    }
    else if(a == 3)
    {
        cout << "Total: R$ " <<fixed << setprecision(2) << 5.00 * m <<endl;
    }
    else if(a == 4)
    {
        cout << "Total: R$ " <<fixed << setprecision(2) << 5.00 * m <<endl;
    }
    else if(a == 5)
    {
         cout  << "Total: R$ " << fixed << setprecision(2) << 1.00 * m <<endl;
    }
    else
        return 0;

    return 0;
}
