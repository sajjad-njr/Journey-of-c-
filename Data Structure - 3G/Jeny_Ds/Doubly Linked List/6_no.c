#include <stdio.h>
#include <conio.h>
#define MAX_LEN 10

void l_search_recursive(int l[],int num,int ele);
void l_search_nonrecursive(int l[],int num,int ele);
void read_list(int l[],int num);
void print_list(int l[],int num);

/* Non-Recursive function*/
void b_search_nonrecursive(int l[],int num,int ele);
/* Recursive function*/
int b_search_recursive(int l[],int arrayStart,int arrayEnd,int a);


int main()
{
    int l[MAX_LEN], num, ele;
    int ch , pos;

    printf("======================================================");
    printf("\n\t\t\tMENU");
    printf("\n=====================================================");
    printf("\n[1] Linary Search using Recursion method");
    printf("\n[2] Linary Search using Non-Recursion method");
    printf("\n[3] Binary Search using Recursion method");
    printf("\n[4] Binary Search using Non-Recursion method");
    printf("\n\nEnter your Choice:");
    scanf("%d",&ch);

    if(ch <= 4 & ch>0)
    {
        printf("Enter the number of elements :");
        scanf("%d",&num);
        read_list(l,num);

        printf("\nElements present in the list are:\n\n");
        print_list(l,num);

        printf("\n\nElement you want to search:\n\n");
        scanf("%d",&ele);

        switch(ch)
        {
        case 1:
            printf("\n**Recursion method**\n");
            l_search_recursive(l,num,ele);
            getch();
            break;

        case 2:
            printf("\n**Non-Recursion method**\n");
            l_search_nonrecursive(l,num,ele);
            getch();
            break;
        case 3:
            printf("\nRecursive method:\n");
            pos=b_search_recursive(l,0,num,ele);
            if(pos==-1)
            {
                printf("Element is not found");
            }
            else
            {
                printf("Element is found at %d position",pos);
            }
            //getch();
            break;

        case 4:
            printf("\nNon-Recursive method:\n");
            b_search_nonrecursive(l,num,ele);
            //getch();
            break;
        }
    }
}

//Recursive method

void l_search_recursive(int l[],int num,int ele)
{
    int f = 0;

    if( l[num] == ele)
    {
        printf("\nThe element %d is present at position %d in list\n",ele,num+1);
        f=1;
    }
    else
    {
        if((num == 0) && (f == 0))
        {
            printf("The element %d is not found.",ele);
        }
        else
        {
            l_search_nonrecursive(l,num-1,ele);
        }
    }
    getch();
}
 //Non-Recursive method

void l_search_nonrecursive(int l[],int num,int ele)
{
    int j, f=0;
    for(j=0; j<num; j++)
        if( l[j] == ele)
        {
            printf("\nThe element %d is present at position %d in list\n",ele,j+1);
            f=1;
            break;
        }
    if(f==0)
        printf("\nThe element is %d is not present in the list\n",ele);
}

/* Non-Recursive function*/
void b_search_nonrecursive(int l[],int num,int ele)
{
   int l1,i,j, flag = 0;
   l1 = 0;
   i = num-1;
   while(l1 <= i)
   {
      j = (l1+i)/2;
      if( l[j] == ele)
      {
    printf("\nThe element %d is present at position %d in list\n",ele,j+1);
         flag =1;
         break;
      }
      else
        if(l[j] < ele)
           l1 = j+1;
        else
           i = j-1;
   }
   if( flag == 0)
   printf("\nThe element %d is not present in the list\n",ele);
}

/* Recursive function*/
int b_search_recursive(int l[],int arrayStart,int arrayEnd,int a)
{
  int m,pos;
  if (arrayStart<=arrayEnd)
  {
    m=(arrayStart+arrayEnd)/2;
    if (l[m]==a)
      return m;
    else if (a<l[m])
      return b_search_recursive(l,arrayStart,m-1,a);
    else
      return b_search_recursive(l,m+1,arrayEnd,a);
   }
   return -1;
}

void read_list(int l[],int num)
{
    int j;
    printf("\nEnter the elements:\n");
    for(j=0; j<num; j++)
        scanf("%d",&l[j]);
}

void print_list(int l[],int num)
{
    int j;
    for(j=0; j<num; j++)
        printf("%d\t",l[j]);
}

