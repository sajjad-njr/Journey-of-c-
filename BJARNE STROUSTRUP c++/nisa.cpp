#include<bits/stdc++.h>

using namespace std;

struct Student
{

    char name[50];
    int id;
    float mark;
};

int main()
{
    Student info;


    cin.get(info.name,50);
    cin>>info.id;
    cin>>info.mark;

     cout<<info.name<<" "<<info.id<<" "<<info.mark<<endl;

}
