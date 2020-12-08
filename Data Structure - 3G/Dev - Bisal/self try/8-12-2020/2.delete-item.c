#include<stdio.h>

int main()
{
    int a[10];
    int i = 0,size,data,pos = 0,element = 0;

    printf("\n\tEnter size of array : ");
    scanf("%d",&size);

    printf("\n\tEnter element of array : ");

    for(i = 0; i < size; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\n\tEnter array   delete  position : ");
    scanf("%d",&pos);
    printf("\n\tEnter array  delete element : ");
    scanf("%d",&data);
    pos = pos - 1;
   for(i = pos ; i < size - 1 ; i++)
   {
       a[i] = a[i+1];
   }
    size = size - 1;
    return 0;
}
