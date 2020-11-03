#include<iostream>

using namespace std ;
int main()
{
    string name ;
    cout << "May i know your name " ;
    //cin >> name ; // before space print all

    getline(cin , name );  //get line print all space until enter
    cout << " Welcome dear " << name ;

    return 0 ;
}
