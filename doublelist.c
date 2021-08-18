#include<stdio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node *next;
  struct node *pre;
}*head,*temp,*tp,*newnode;

void insertfirst(void);
void insertlast(void);
void insertmiddle(void);
void deletefirst(void);
void deletelast(void);
void deletemiddle(void);
void display(void);

void main()
{
  int c;
 while(1)
 {
printf("\n1.insertfirst\n2.insertmiddle\n3.insertlast\n4.deletefirst\n5.deletemiddle\n6.deletelast\n7.display\n8.Find\n9.exit\n");
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
    case 9:
          exit(0);
     }
   }
}
void insertfirst()
{
   int x;
     printf("\n enter the number\n");
     scanf("%d",&x);
     newnode=(struct node *)malloc(sizeof(struct node));
     newnode ->data=x;
     newnode ->next=NULL;
     newnode ->pre=NULL;
   if(head==NULL)
   {
     head= newnode;
   }
   else
   {
     newnode ->next=head;
     head->pre= newnode;
     head= newnode;
   }
}
void insertmiddle()
{
   int x,y;
       printf("\n enter the element \n");
       scanf("%d",&y);
       newnode =(struct node *)malloc(sizeof(struct node));
       newnode ->data=y;
       newnode ->next=NULL;
       newnode ->pre=NULL;
if(head==NULL)
   {
       head= newnode;    }
   else
   {
      printf("enter the element before which insertion to be made\n");
      scanf("%d",&x);
      tp=head;
      while(tp->data!=x && tp!=NULL)
      {
        tp=tp->next;
      }
      if(tp==NULL)
      {
        printf("\n element is not found in the list\n");
      }
      else if(tp==head)
      {
           newnode->next=head;
           head->pre= newnode;
           head= newnode;
     }
    else
    {
newnode ->pre=tp->pre;
         newnode ->next=tp;
         tp->pre->next= newnode;
         tp->pre= newnode;
    }
  }
}
void insertlast()
{
   int x;
     printf("\n enter the number\n");
     scanf("%d",&x);
       newnode =(struct node *)malloc(sizeof(struct node));
       newnode ->data=x;
       newnode ->next=NULL;
       newnode ->pre=NULL;
     if(head==NULL)
     {
     	head=temp;
     }
    else
    {
      tp=head;
     while(tp->next!=NULL)
     {
       tp=tp->next;
     }
       tp->next=newnode;
       newnode->pre=tp;
    }
}
void deletefirst()
{
   if(head==NULL)
         printf("\n Doubly Linked List is empty\n");
   else if(head->next==NULL)
   {
      printf("\n The deleted element is %d",head->data);
      tp=head;
      head=NULL;
      free(tp);
   }
   else
   {
      printf("\n The deleted element is %d",head->data);
      tp=head;
      head=head->next;
      head->pre=NULL;
      free(tp);
   }
}
void deletelast()
{
   if(head==NULL)
      printf("\n Doubly Linked List is empty\n");
   else if(head->next==NULL)
     {
  	printf("\n The deleted element is %d",head->data);
     	tp=head;
      	head=NULL;
      	free(tp);
     }
     else
     {
  	tp=head;
  	while(tp->next!=NULL)
  	{
    	 tp=tp->next;
  	}
     	printf("\n The deleted element is %d",tp->data);
     	tp->pre->next=NULL;
    	free(tp);
     }
   }
void deletemiddle()
{
   int x;
   if(head==NULL)
   {   printf("\n Doubly Linked List is empty\n");
   }
   else
   {
    printf("\n enter the element to be deleted\n");
    scanf("%d",&x);
    tp=head;
    while(tp->data!=x && tp->next!=NULL)
     {
  	tp=tp->next;
     }
     if(tp->data!=x)
      {
        printf("\n element is not found in the list\n");
      }
    else  if(tp==head)
    {
          head=head->next;
          head->pre=NULL;
     }
  else
  {
    tp->pre->next=tp->next;
    tp->next->pre=tp->pre;
    free(tp);
  }
}
}
void display()
{
   if(head==NULL)
     printf("\n Doubly Linked List is empty\n");
   else
   {
     printf("\n The elements in the list are (From Begining)\n");
     tp=head;
     while(tp!=NULL)
     {
       printf("%d->",tp->data);
       temp=tp;
       tp=tp->next;
     }
     printf("NULL");
     printf("\n The elements in the list are (From End)\n");
     while(temp!=NULL)
     {
       printf("%d->",temp->data);
       temp=temp->pre;
     }
     printf("NULL");
   }
}

void find(void)
{

    int x;
    if(head==NULL)
     printf("\n The Doubly Linked List is empty\n");
   else
   {
    printf("\n enter the element to be searched\n");
    scanf("%d",&x);
    tp=head;
    while(tp!=NULL)
    {
       if(tp->data==x)
       {
    	   printf("\n element is found\n");
    	   break;
       }
       tp=tp->next;
    }
    if(tp==NULL)
       printf("\n element is not found\n");
   }
}
