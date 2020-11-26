#include<bits/stdc++.h>
using namespace std;
int main()
{
    //single line means before catch space its return ;
    /*
    char s[20];
    cout <<"Enter your name : ";
    cin >> s ;
    cout << s;
    */

    // double name print
    /*
    char s[20];
     char s2[20];
    cout <<"Enter your name : ";
    cin.get(s,20);
    cout << s ;

    cout <<"Enter your name : ";
    cin.get(s2,20);
    cout << s2 ;

    */

//the deference between get line

    char s[20];
    char s2[20];
    cout <<"Enter your name : ";
    cin.getline(s,20);
    cout << s ;
    cout << endl;

    cout <<"Enter your name : ";
    cin.getline(s2,20);
    cout << s2 ;
    cout << endl;
    return 0;
}
