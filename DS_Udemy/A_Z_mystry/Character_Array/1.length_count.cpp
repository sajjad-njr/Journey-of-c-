#include<bits/stdc++.h>
using namespace std;

int lenag(char a[])
{
    int count = 0 ;

    for(int i = 0 ; a[i] != '\0' ; i++)
    {
        count++;
    }
    return count ;
}

int main()
{
    char name[100];
    cout << " Enter your name = ";
    cin>>name;

    cout << lenag(name);
    return 0;
}
