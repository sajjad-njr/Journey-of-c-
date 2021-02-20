 #include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head;

void createnode();
void beginsert ();
void lastinsert ();
void randominsert();
void begin_delete();
void last_delete();
void random_delete();
void display();
void search();

int main ()
{
    int choice = 0;
    while(choice != 8)
    {

        printf("\n1.Create Node\n2.Insert in begining\n3.Insert at last\n4.Delete from Beginning\n5.Delete from last\n6.Search for an element\n7.Show\n8.Exit\n");
        printf("\nEnter your choice?\n");
        scanf("\n%d",&choice);
        switch(choice)
        {
        case 1:
            createnode();
            break;
        case 2:
            beginsert();
            break;
        case 3:
            lastinsert();
            break;
        case 4:
            begin_delete();
            break;
        case 5:
            last_delete();
            break;
        case 6:
            search();
            break;
        case 7:
            display();
            break;
        case 8:
            exit(0);
            break;
        default:
            printf("Please enter valid choice..");
        }
    }
}


void createnode()
{
    struct node *ptr, *temp, *newnode;
    int item;
    newnode = (struct node *)malloc(sizeof(struct node));
    if(newnode == NULL)
    {
        printf("\nOVERFLOW");
    }
    else
    {
        printf("\nEnter the node data: ");
        scanf("%d",&item);
        newnode->data = item;
        newnode->next = NULL;
        if(head == NULL)
        {
            head = newnode;
        }
        else
        {
            temp = head;
            while(temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newnode;
        }
    }
    printf("\nCurrent Node is: %d\n", item);
}

void beginsert()
{
    struct node *ptr,*temp;
    int item;
    ptr = (struct node *)malloc(sizeof(struct node));
    if(ptr == NULL)
    {
        printf("\nOVERFLOW");
    }
    else
    {
        printf("\nEnter the node data: ");
        scanf("%d",&item);
        ptr -> data = item;
        if(head == NULL)
        {
            head = ptr;
            ptr -> next = NULL;
        }
        else
        {
            ptr->next = head;
            head = ptr;
        }
        printf("\nnode inserted\n");
    }

}
void lastinsert()
{
    struct node *ptr,*temp;
    int item;
    ptr = (struct node *)malloc(sizeof(struct node));
    if(ptr == NULL)
    {
        printf("\nOVERFLOW\n");
    }
    else
    {
        printf("\nEnter Data: ");
        scanf("%d",&item);
        ptr->data = item;
        ptr -> next = NULL;
        if(head == NULL)
        {
            head = ptr;
        }
        else
        {
            temp = head;
            while(temp -> next != NULL)
            {
                temp = temp -> next;
            }
            temp -> next = ptr;
        }
        printf("\nnode inserted\n");
    }

}

void begin_delete()
{
    struct node *ptr;
    if(head == NULL)
    {
        printf("\nUNDERFLOW");
    }
//    else if(head->next == head)
//    {
//        head = NULL;
//        free(head);
//        printf("\nnode deleted\n");
//    }

    else
    {
//        ptr = head;
//        while(ptr -> next != head)
//            ptr = ptr -> next;
//        ptr->next = head->next;
//        free(head);
        head = head->next;
        printf("\nnode deleted\n");

    }
}
void last_delete()
{
    struct node *ptr, *save;
    if(head==NULL)
    {
        printf("\nUNDERFLOW");
    }
//    else if (head ->next == head)
//    {
//        head = NULL;
//        free(head);
//        printf("\nnode deleted\n");
//
//    }
    else
    {
        ptr = head;
        while(ptr ->next != NULL)
        {
            save = ptr;
            ptr = ptr->next;
        }
        save->next = NULL;
        printf("\nnode deleted\n");
    }
}

void search()
{
    struct node *ptr;
    int item,i=0,flag=1;
    ptr = head;
    if(ptr == NULL)
    {
        printf("\nEmpty List\n");
    }
    else
    {
        printf("\nEnter item which you want to search?\n");
        scanf("%d",&item);
        if(head ->data == item)
        {
            printf("item found at location %d",i+1);
            flag=0;
        }
        else
        {
            while (ptr->next != NULL)
            {
                if(ptr->data == item)
                {
                    printf("item found at location %d ",i+1);
                    flag=0;
                    break;
                }
                else
                {
                    flag=1;
                }
                i++;
                ptr = ptr -> next;
            }
        }
        if(flag != 0)
        {
            printf("Item not found\n");
        }
    }

}

void display()
{
    struct node *ptr;
    ptr=head;
    if(head == NULL)
    {
        printf("\nnothing to print");
    }
    else
    {
        printf("\n printing values ... \n");

        while(ptr -> next != NULL)
        {

            printf("%d\n", ptr -> data);
            ptr = ptr -> next;
        }
        printf("%d\n", ptr -> data);
    }

}
