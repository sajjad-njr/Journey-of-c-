#include<iostream>
using namespace std;
int main()
{
    int a[2][3];
    int sum = 0 ;

    for(auto& x : a)
    {
        for(auto& y:x)
        {
            cin >> y;
        }
    }

    for(auto& x : a)
    {
        for(auto& y : x)
        {
            cout << y << " ";
            sum += y ;
        }
        cout << endl;
    }

    //adding part
   /* for(auto& x : a)
    {
        for(auto& y : x)
        {
            cout << y << " ";
        }
        cout << endl;
    } */
    cout << endl << " SUM = " << sum << endl;

}
