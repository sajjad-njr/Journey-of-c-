#include<iostream>
using namespace std;

int main()
{
    int x = 10 ;
    int &y = x;
    cout << "X = " << x << endl;
    y++;
    x++;

    cout << "X = " << x << endl;

    return 0;
}
