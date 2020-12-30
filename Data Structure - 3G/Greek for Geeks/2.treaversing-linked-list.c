 #include<stdio.h>
 #include<stdlib.h>

 typedef struct node()
 {
     int data;
     struct node *next ;
 }Node;

 void printList(Node n)
 {
     while(n != NULL)
     {
         printf(" %d ",n->data);
         n = n -> next ;
     }
 }

 int main()
 {

 }
