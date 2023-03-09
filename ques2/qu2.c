/*Write a c program to implement linked list and insert the elements as follows
A.Insert at begning
B.Delete at begning
C.Forward traversal*/

#include<stdio.h>
#include<stdlib.h>

void insert_begin(int ele);
int delete_begin();
void forward_traversal();

struct node
{
    int data;
    struct node*next;
};

struct node*temp;
struct node*list;
struct node*curr;

void insert_begin(int ele)
{
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=ele;
    temp->next=list;
    list=temp;
}

int del_begin()
{
    int x=-1;
    if(list!=NULL)
    {
	temp=list;
    x=temp->data;
    list=temp->next;
    free(temp);
    }
    else   
    printf("list is empty");
       
   return x;
 }
void forward()
{
curr=list;
while(curr!=NULL)
{
printf("%d\t",curr->data);
curr=curr->next;
}
}

int display(struct node*curr)
{
    if(curr==NULL)

    return (display(curr->next));
    printf("%d",curr->data);
}

int main()
{
  int n,element;
  while(1)
  {
    printf("\nenter your choice");
     
    printf("1.Insert at Begin\n2.Delete at Begin\n3.Forward traversal\n");
    scanf("%d",&n);
     switch(n)
    {
        case 1: printf("\nenter the element:");
                scanf("%d",&element);
                insert_begin(element);
        break;

        case 2: del_begin();
        break;

        case 3: forward();
        break;

        case 4: exit(1);
        break;

        default: printf("worng choice");
        break;
    }
}
}





















