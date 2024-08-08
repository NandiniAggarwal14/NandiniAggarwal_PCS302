#include<stdio.h>
#define max 5
int a[max], top=-1;
void push(int);
void pop();
int isEmpty();
int isFull();
void peek();
void display();
int main()
{
int ch, c, n;
do
{
printf("\n1.Insert an element in stack\n2.Delete an element\n3.To check if stack is empty\n4.To check is array is full\n5.To retreive topmost element\n6.To display elements of stack\n");
printf("\nEnter choice: ");
scanf("%d",&ch);
switch(ch)
{
case 1:
{
printf("\nEnter element to be inserted: ");
scanf("%d",&n);
push(n);
break;
}
case 2: 
{
pop();
break;
}
case 3: 
{
if (isEmpty())
    printf("\nStack is empty");
else
    printf("\nStack is not empty");
break;
}
case 4: 
{
if (isFull())
    printf("\nStack is full");
else
    printf("\nStack is not full");
break;
}
case 5: 
{
peek();
break;
}
case 6:
{
display();
break;
}
default: printf("\nInvalid choice");
}
printf("\nDo you wish to continue ? If yes, enter 1: ");
scanf("%d",&c);
}
while(c==1);
return 0;
}
void push(int n)
{
if(isFull())
printf("\nStack overflow");
else
{
a[++top]=n;
}
}
void pop()
{
if(isEmpty())
printf("\nStack underflow");
else
top--;
}
int isEmpty()
{
if(top==-1)
return 1;
else
return 0;
}
int isFull()
{
if(top==max-1)
return 1;
else 
return 0;
}
void peek()
{
printf("%d",a[top]);
}
void display()
{
    if(isFull())
    printf("\nStack overflow");
    else
    {
    for(int i=top;i>=0;i--)
    printf("%d ",a[i]);
    }
}
