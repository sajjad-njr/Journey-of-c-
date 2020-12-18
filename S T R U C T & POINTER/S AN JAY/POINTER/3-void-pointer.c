#include<stdio.h>

int main()
{
    int a = 56 ;
    float v = 495.56;

    void *o;
    o = &a;
    //printf("%d",v);

    //printf("%d",&a);
    printf("%d",((int*)o));

    o = &v;
    printf("\n%d",((float*)o));
    return 0;


}
