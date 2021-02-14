#include<bits/stdc++.h>
using namespace std;

int main()
{
    int A[2];
    cout <<"Enter the two of array = ";
    cin >> A[0] >> A[1];

    int temp ;

    temp = A[0];

    A[0] = A[1];

    A[1] = temp;

    cout << A[0] << " " << A[1];
    return 0;
}

