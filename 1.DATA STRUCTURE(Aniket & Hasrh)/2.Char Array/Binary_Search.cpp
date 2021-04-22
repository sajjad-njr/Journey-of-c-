#include<bits/stdc++.h>
using namespace std;

int BinarySearch(int X[], int n, int Xm);

int main()
{
    int n,Z;

    cout<<"\nEnter the size of array = ";
    cin>>n;

    int X[n];

    cout<<"\nEnter the sorted element of the array= ";

    for(int i = 1 ; i <= n ; i++)
    {
        cin>>X[i];
    }

    cout<<"\nEnter searching element= ";
    cin>>Z;

    int data = BinarySearch(X,n,Z);

    if(data == 1)
    {
        cout<<"FOUND";
    }
    else
    {
        cout<<"NOT FOUND";
    }
    return 0;
}
int BinarySearch(int X[], int n, int Z)
{
    int l = 1;      //lowest value
    int h = n ;     //highest value
    int flag = 0;
    while( l <= h && flag == 0)
    {
        int mid = (l+h)/2;
        int Xm = X[mid];

        if(Xm < Z)
            l = mid + 1;
        else if (Xm > Z)
            h = mid - 1;
        else
            flag = 1;

    }

    if(flag == 1)
        return 1;
    else
        return -1;
}




