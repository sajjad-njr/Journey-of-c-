#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"Enter the size of Array = ";
    int n;
    cin>>n;
    cout<<endl;

    int A[n];
    cout <<"Enter the element of array = ";

    for(int i = 0 ; i < n ; i++)
    {
        cin >> A[i];
    }

    int start = 0;
    int end = n-1;

    while(start <= end)
    {
        swap(A[start] , A[end]);
        start++;
        end--;

    }

    for(int i = 0 ; i < n ; i++)
    {

         cout << A[i] << " ";
    }

    return 0;
}


