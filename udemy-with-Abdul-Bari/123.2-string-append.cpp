#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str = "sanda";

    cout << str.capacity() << endl;
    //inset use for data add in fix element in an index
    str.insert(3,"ji");
    cout << str << endl;

    // how change capacity
    string str1 = "sandajiiiiiiiiiiiida";

    cout << str1.capacity() << endl;
    return 0;
}

