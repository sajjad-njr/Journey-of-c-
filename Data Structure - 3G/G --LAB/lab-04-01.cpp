#include<bits/stdc++.h>
using namespace std ;

struct student
{
     string name;
    int id ;
    float marks ;
};

int main()
{
    student info[5] ;
    int i;
    /* for 1 student
    student info ;
    cin.get(info.name,50);
    cin>> info.id;
    cin >> info.marks;

     cout << info.name << " " << info.id << " " << info.marks  << endl;

    */
    // for multiple student

    for(i = 0 ; i < 5 ; i++)
    {
        //cin.get(info[i].name,50);
        cin >> name;
        cin>> info[i].id;
        cin >> info[i].marks;
    }

    for (i = 0 ; i < 5 ; i++)
    {
        cout << info[i].name << " " << info[i].id << " " << info[i].marks  << endl;
    }


    return 0;
}
