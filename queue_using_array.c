#include<stdio.h>
#define max 5
int q[max], front=-1, rear=-1;
void insert(int n)
{
    if(rear==max-1)
    printf("\nQueue Overflow");
    else
    {
        if(front==-1)
        front=rear=0;
        else
        rear++;
        q[rear]=n;
    }
}
void delete()
{
    if(front==-1)
    printf("\nQueue Underflow");
    else
    {
        int x=q[front];
        if(front==rear)
        front=rear=-1;
        else
        front++;
        printf("\nDeleted element is %d",x);
    }
}
void display()
{
    if(front==-1)
    printf("\nQueue Underflow");
    else
    {
        for(int i=front;i<=rear;i++)
        printf("%d ",q[i]);
    }
}
int main()
{
    int ch, c, n;
do
{
printf("\n1.Insert an element in queue\n2.Delete an element\n3.To display elements of queue\n");
printf("\nEnter choice: ");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("\nEnter element to be inserted: ");
scanf("%d",&n);
insert(n);
break;
case 2: 
delete();
break;
case 3: 
display();
break;
default: printf("\nInvalid choice");
}
printf("\nDo you wish to continue ? If yes, enter 1: ");
scanf("%d",&c);
}
while(c==1);
return 0;
}
