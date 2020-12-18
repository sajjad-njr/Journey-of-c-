#include<stdio.h>
int re(int a)
{
    if(a==1)
    {
        return 1;
    }

    return a * re(a-1);
}
int main()
{
    int a,b;
    a = 4;
    b = re(3);

    printf("%d",b);
    return 0;

}
