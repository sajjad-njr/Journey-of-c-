#include<iostream>  //prepocesor directive
#include<string>


using namespace std ; //using declaration

int main()
{
    int x ;
    cin >> x ;

    cout << x << endl;

    getchar();
    string str ;

    getline(cin, str) ;
    cout << str ;
    return 0 ;
}
