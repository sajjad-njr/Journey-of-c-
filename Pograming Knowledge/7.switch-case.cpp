#include<iostream>

using namespace std ;

int main()
{
    int grade ;

    cout << "Enter your marks = ";
    cin >> grade ;

    switch(grade)
    {
    case 80 :
        cout<<"You got a+" <<endl;
        break;
    case 70 :
        cout<<"You got a" <<endl;
        break;
    case 60 :
        cout<<"You got a-" <<endl;
        break;
    case 50 :
        cout<<"You got b" <<endl;
        break;
    default:
        cout<<" Fail" <<endl;

    }
}
