#include<iostream>

using namespace std;

int main()
{
    int a[5] = { 4, 6, 7, 8, 9};


    int *p = a;
    //p++;
    p--;
    cout << *p;
    return 0;
}

