#include<iostream>
using namespace std;
int main()
{
    int a[2][3];

    for(auto x:a)
    {
        for(auto y:x)
        {
            cin >>y;
        }
    }
}
