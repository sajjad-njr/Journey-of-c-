#include<iostream>
#include<string>

using namespace std ;

int main()
{
    string str ;
    cin >> str ;

    //range based for loop
    for(char c: str)
    {
        cout << c << " ";
    }

    return 0 ;
}
