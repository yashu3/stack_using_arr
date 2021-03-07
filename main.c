#include <stdio.h>
#include <stdlib.h>
int stack[5];
int top=-1;
void push();
void display();
void pop();
int main()
{
   int n;
   while(1)
 {

   printf("1.PUSH\n");
   printf("2.display\n");
   printf("3.POP\n");
   printf("4.quit\n");
   scanf("%d",&n);
   printf("\n\n");
   switch(n)
   {
   case 1:
   push();

       break;
   case 2:
   display();
         break;
   case 3:
   pop();
         break;
   case 4:
        exit(1);
        break;
   default:
       printf("enter right choice");

}

}
return 0;
}
void push()
{
int x;
if(top==4)
printf("Stack Overflow\n");
else
{
printf("Enter data\n");
scanf("%d",&x);
stack[top]=x;
top++;
}
}
void pop()
{
if(top==-1)
printf("Stack underflow\n");
else
top--;
}
void display()
{
for(int i=-1;i<top;i++)
printf("%d",stack[i]);
printf("\n");
}
