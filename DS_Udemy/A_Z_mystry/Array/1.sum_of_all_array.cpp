#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"Enter the size of Array = ";
    int n; cin>>n;
    cout<<endl;

    int A[n];
    cout <<"Enter the element of array = ";

    for(int i = 0 ; i < n ; i++)
    {
        cin >> A[i];
    }
    int sum = 0 ;

    for(int i = 0 ; i < n ; i++)
    {
         sum += A[i];
    }

    cout << " Total sum of array = " << sum ;
    return 0;
}
