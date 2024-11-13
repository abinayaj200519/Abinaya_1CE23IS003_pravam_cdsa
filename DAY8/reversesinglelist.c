//Can we reverse a linked list in less than O(n) ?
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
	
};

struct stack
{
	int a[300],top;
};

void push(int n,struct stack *s)
{
	s->a[++(s->top)]=n;
}
int pop(struct stack *s)
{
	if(s->top>=0)
	return s->a[(s->top)--];
	else 
	    return -1000;
}

struct node* insertAtLast(int data,struct node* head)
{
	struct node *s=(struct node*)malloc(sizeof(struct node)),*t;
	s->data=data;
	s->next=NULL;
	if(head==NULL)return s;
	t=head;
	while(t->next!=NULL)t=t->next;
	t->next=s;
	return head;
}
void printList(struct node *l)
{
	struct node *t=l;
	while(t!=NULL)
	{
		printf("%d -> ",t->data);
		t=t->next;
	}
	printf("\n");
}

int main()
{
	struct node *head=NULL,*t=NULL,*res=NULL;
	struct stack s;
	s.top=-1;
	int n=0,i=0,temp=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&temp);
		head=insertAtLast(temp,head);
	}
	t=head;
	while(t!=NULL)
	{
		push(t->data,&s);
		t=t->next;
	}
	temp=pop(&s);
	while(temp!=-1000)
	{
		res=insertAtLast(temp,res);
		temp=pop(&s);
	}
	printList(head);
	printList(res);
}