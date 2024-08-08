#include<stdio.h>
#define max 5
int a[max], top=-1;
void push();
void pop();
int isEmpty();
int isFull();
void peek();
void display();
int main()
{
int ch, c;
do
{
printf("\n1.Insert an element in stack\n2.Delete an element\n3.To check if stack is empty\n4.To check is array is full\n5.To retreive topmost element\n6.To display elements of stack\n");
printf("\nEnter choice: ");
scanf("%d",&ch);
switch(ch)
{
case 1:
{
push();
break;
}
case 2: 
{
pop();
break;
}
case 3: 
{
isEmpty();
break;
}
case 4: 
{
isFull();
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
printf("\nDo you wish to continue ? If yes, enter 1");
scanf("%d",&c);
}
while(c==1);
return 0;
}
void push()
{
int n;
printf("\nEnter element to be inserted: ");
scanf("%d",&n);
if(isFull==1)
printf("\nStack overflow");
else
{
a[top++]=n;
}
}
void pop()
{
if(isEmpty==1)
printf("\nStack underflow");
else
top--;
}
int isEmpty()
{
if(top==-1)
return 1;
}
int isFull()
{
if(top==max-1)
return 1;
}
void peek()
{
printf("%d",a[top]);
}
void display()
{
for(int i=0;i<a[top];i++)
printf("%d ",a[i]);
}
