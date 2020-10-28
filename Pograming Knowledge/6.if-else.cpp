#include<iostream>

using namespace std ;

int main()
{
    int age ;
    int height ;

    cout<<"Enter your  age : " <<endl;
    cin >> age ;

    cout<<"Enter your  Height  : " <<endl;
    cin >>  height ;

    if(age >= 20  && height == 100)
    {
        cout<<"\tYour  age and height is right " << endl;
    }

    else
    {
         cout<<"\tYour  age and height is wrong " << endl;
    }

    return 0 ;
}
