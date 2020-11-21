#include<iostream>

using namespace std;

int main()
{
    int a[5] = { 4, 6, 7, 8, 9};
    int b[5] = {22,34,56,78,90};

    int *q = &a[2];
    int *p = &b[4];

    int d = q  - p ;



    cout << d;
    return 0;
}
