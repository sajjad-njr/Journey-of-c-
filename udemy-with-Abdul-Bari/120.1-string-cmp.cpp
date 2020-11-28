#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s1[20], s2[20];

    cin.getline(s1,20);
    cin.getline(s2,20);

    if(strcmp(s1,s2) == 0)
        cout<<"both are equal" << endl;
    else
         cout<<"no same " << endl;


    return 0;
}
