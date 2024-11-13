#include<stdio.h>
#include<stdlib.h>
#define MAX 20

int stack[MAX],top=-1;
void push(int );
int pop();
void disp();

int main()
{
    int choice=0,exits=1,x=0;
    while(exits)
    {
        printf("\nPress 1 to push 2 to pop 3 to display\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:scanf("%d",&x);
                   push(x);
                   break;
            case 2: printf("popped element is %d",pop());
                   break;
            case 3: disp();
                   break;
            default: exits=0;
        }
    }
    return 0;
}

void push(int x)
{
    if(top+1==MAX)
    {
        printf("\nStack over flow\n");
        exit(1);
    }
    else
    {
        stack[++top]=x;
    }
}
int pop()
{
    if(top==-1)
    {
        printf("\nStack underflow\n");
        exit(2);
    }
    else
    return stack[top--];
}
void disp()
{
    if(top==-1)
        printf("\nStack is empty\n");
    else
    {
        int t=top;
        for(;t>-1;t--)
            printf("\n|  %d |",stack[t]);
    }
}