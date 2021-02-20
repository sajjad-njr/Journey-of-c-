#include <stdio.h>
#include <conio.h>
#define MAX_LEN 10

void linear_recursive(int array[],int num,int element);
void linear_nonrecursive(int array[],int num,int element);
void read_list(int array[],int num);
void print_list(int array[],int num);
void binary_nonrecursive(int array[],int num,int element);
int binary_recursive(int array[],int arrayStart,int arrayEnd,int a);


int main()
{
    int array[MAX_LEN], num, element;
    int data , position;

    printf("\n[1] Linary Search using Recursion method");
    printf("\n[2] Linary Search using Non-Recursion method");
    printf("\n[3] Binary Search using Recursion method");
    printf("\n[4] Binary Search using Non-Recursion method");
    printf("\n\nEnter your Choice: ");
    scanf("%d",&data);

    if(data <= 4 & data>0)
    {
        printf("Enter the number of elements :");
        scanf("%d",&num);
        read_list(array,num);

        printf("\nElements present in the list are:\n\n");
        print_list(array,num);

        printf("\n\nElement you want to search:\n\n");
        scanf("%d",&element);

        switch(data)
        {
        case 1:
            printf("\n**Recursion method**\n");
            linear_recursive(array,num,element);
            getch();
            break;

        case 2:
            printf("\n**Non-Recursion method**\n");
            linear_nonrecursive(array,num,element);
            getch();
            break;
        case 3:
            printf("\nRecursive method:\n");
            position=binary_recursive(array,0,num,element);
            if(position==-1)
            {
                printf("Element is not found");
            }
            else
            {
                printf("Element is found at %d position",position);
            }

            break;

        case 4:
            printf("\nNon-Recursive method:\n");
            binary_nonrecursive(array,num,element);
            //getch();
            break;
        }
    }
}

//Recursive method

void linear_recursive(int array[],int num,int element)
{
    int f = 0;

    if( array[num] == element)
    {
        printf("\nThe element %d is present at position %d in list\n",element,num+1);
        f=1;
    }
    else
    {
        if((num == 0) && (f == 0))
        {
            printf("The element %d is not found.",element);
        }
        else
        {
            linear_nonrecursive(array,num-1,element);
        }
    }
    getch();
}
 //Non-Recursive method

void linear_nonrecursive(int array[],int num,int element)
{
    int j, f=0;
    for(j=0; j<num; j++)
        if( array[j] == element)
        {
            printf("\nThe element %d is present at position %d in list\n",element,j+1);
            f=1;
            break;
        }
    if(f==0)
        printf("\nThe element is %d is not present in the list\n",element);
}

/* Non-Recursive function*/
void binary_nonrecursive(int array[],int num,int element)
{
   int l1,i,j, flag = 0;
   l1 = 0;
   i = num-1;
   while(l1 <= i)
   {
      j = (l1+i)/2;
      if( array[j] == element)
      {
    printf("\nThe element %d is present at position %d in list\n",element,j+1);
         flag =1;
         break;
      }
      else
        if(array[j] < element)
           l1 = j+1;
        else
           i = j-1;
   }
   if( flag == 0)
   printf("\nThe element %d is not present in the list\n",element);
}

/* Recursive function*/
int binary_recursive(int array[],int arrayStart,int arrayEnd,int a)
{
  int m,positio;
  if (arrayStart<=arrayEnd)
  {
    m=(arrayStart+arrayEnd)/2;
    if (array[m]==a)
      return m;
    else if (a<array[m])
      return binary_recursive(array,arrayStart,m-1,a);
    else
      return binary_recursive(array,m+1,arrayEnd,a);
   }
   return -1;
}

void read_list(int array[],int num)
{
    int j;
    printf("\nEnter the elements:\n");
    for(j=0; j<num; j++)
        scanf("%d",&array[j]);
}

void print_list(int array[],int num)
{
    int j;
    for(j=0; j<num; j++)
        printf("%d\t",array[j]);
}


