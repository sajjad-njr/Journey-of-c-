#include<bits/stdc++.h>

using namespace std;

struct student
{

    char name[50];
    int id;
    char address;
    int mark;
};

int main()
{
    student info[10];

    for(int i=0; i<5; i++)
    {
        cin.get(info[i].name,50);
        cin>>info[i].id;
        cin>>info[i].mark;
        cin>>info[i].address;

    }

    for(int i=0; i<1; i++)
    {
        cout<<info[i].name<<" "<<info[i].id<<" "<<info[i].address<<" "<<info[i].mark<<endl;
    }
    return 0;
}
