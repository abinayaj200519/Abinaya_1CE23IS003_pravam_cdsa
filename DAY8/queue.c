#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};

typedef struct node* Node;

Node delete(Node );
Node add(Node ,int);
void display(Node root);

int main()
{
    int choice=0;
    Node root=NULL;
    while(1){
        int x=0;
        printf("\nPress 1 to insert 2 to delete 3 to display\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: scanf("%d",&x);
                    root=add(root,x);
                    break;
            case 2:root=delete(root);
                   break;
            case 3: display(root);
                    break;
            default: return 0;
        }
    }
    
    return 0;
}
Node delete(Node root)
{
    if(root==NULL)
    {
        printf("the Queue is empty\n");
        exit(1);
    }
    else
    {
        Node temp=root,del=NULL;
        while(temp->next->next!=NULL)
            temp=temp->next;
        del=temp->next;
        printf("deleted node %d",del->data);
        temp->next=NULL;
        free(del);
        return root;
    }
}
Node add(Node root,int x)
{
    if(root==NULL)
    {
        Node temp=(Node)malloc(sizeof(struct node));
        temp->data=x;
        temp->next=NULL;
        return temp;
    }
    else
    {
        Node newnode;
        
        newnode=(Node)malloc(sizeof(struct node));
        newnode->data=x;
        newnode->next=root;
        return newnode;
    }
}
void display(Node root)
{
    if(root==NULL)
        printf("Queue is empty\n");
    else
    {
        
        while(root!=NULL)
        {
            printf("| %d |-->",root->data);
            root=root->next;
        }
    }
}