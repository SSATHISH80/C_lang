#include<stdio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node *next;
}*head,*temp,*tp,*newnode;

void insertfirst(void);
void insertlast(void);
void insertmiddle(void);
void deletefirst(void);
void deletelast(void);
void deletemiddle(void);
void display(void);
void makeempty(void);
void find(void);

void main()
{
  char ch;
  int c;
//  clrscr();
  head=NULL;
do
{
  printf("1.insertfirst \n2.insertmiddle \n3.insertlast \n4.deletefirst  \n5.deletemiddle \n6.deletelast \n7.display\n");
  scanf("%d",&c);
  switch(c)
     {
	case 1:
	       insertfirst();
	       break;
	case 2:
	       insertmiddle();
	       break;
	case 3:
	       insertlast();
	       break;
	case 4:
	       deletefirst();
	       break;
	case 5:
	       deletemiddle();
	       break;
	case 6:
	       deletelast();
	       break;
	case 7:
	       display();
	       break;



     }
     printf("\ndo u wish to continue(y/n)\n");
    // fflush(stdin);
     scanf(" %c",&ch);
}while(ch=='y');
//getch();
}

void insertfirst()
{
     int x;
     printf("\n enter the number\n");
     scanf("%d",&x);

     newnode=(struct node*)malloc(sizeof(struct node));
     newnode->data=x;
     newnode->next=NULL;

    if(head==NULL)
   {
     head=newnode;
   }
   else
   {
     newnode->next=head;
     head=newnode;
   }
}
void insertmiddle()
{
     int x, key;


     printf("\n enter the number");
     scanf("%d",&x);

     newnode=(struct node*)malloc(sizeof(struct node));
     newnode ->data=x;
     newnode ->next=NULL;

   if(head==NULL)
   {

     head= newnode;
   }
   else
   {
     printf("\nenter the element after which insertion to be made\n");
     scanf("%d",&key);

     tp=head;
     while(tp->data!=key && tp!=NULL)
     {
        tp=tp->next;
     }
     if(tp!=NULL)
     {
	  newnode->next=tp->next;
	  tp->next=newnode;
      }
    else
       printf("\n element is not found in the list\n");
  }
}

void insertlast()
{
     int x;
     printf("\n enter the number\n");
     scanf("%d",&x);

     newnode=(struct node*)malloc(sizeof(struct node));
     newnode ->data=x;
     newnode ->next=NULL;

     if(head==NULL)
     head=newnode;
     else
     {
        tp=head;
        while(tp->next!=NULL)
       {
           tp=tp->next;
       }
          tp->next=newnode;
      }
}

void deletefirst()
{
   if(head==NULL)
      printf("\n Singly Linked List is empty\n");
   else
   {
      tp=head;
      printf("The deleted element is %d", head->data);
      head=head->next;
      free(tp);
   }
}

void deletelast()
{
   if(head==NULL)
      printf("\n Singly Linked List is empty\n");
   else
   {
     tp=head;
     while(tp->next!=NULL)
     {
       temp=tp;
       tp=tp->next;
     }
       printf("The deleted element is %d",tp->data);
       temp->next=NULL;        // temp->next = tp->next;
       free(tp);
   }

}
void deletemiddle()
{
   int key;

   if(head==NULL)
      printf("\n Singly Linked List is empty\n");
   else
   {
      printf("\n enter the element to be deleted\n");
      scanf("%d",&key);
      tp=head;
      while(tp->data!=key && tp!=NULL)
      {
          temp=tp;
          tp=tp->next;
      }
       if(tp==NULL)
      {
	printf("\n element is not found in the list\n");
       }
      else
     {
         printf("The deleted element is %d",tp->data);
         temp->next = tp->next;
         free(tp);
      }
   }
}
void display()
{
     if(head==NULL)
           printf("\n Singly Linked List is empty\n");
   else
   {
     tp=head;
     while(tp!=NULL)
     {
       printf("%d->",tp->data);
       tp=tp->next;
     }
     printf("NULL");
   }
}
