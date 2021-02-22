#include<bits/stdc++.h>
using namespace std;

int len_string(char name[])
{
    int count = 0;

    for(int i = 0 ; name[i] != '\0' ; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char array[100];

    cin>>array;

    cout<<len_string(array)<<endl;
    return 0;
}
