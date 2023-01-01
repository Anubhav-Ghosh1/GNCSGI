#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left,*right;
};
struct node *create(struct node *root)
{
    int x;
    struct node *newnode;
    newnode=malloc(sizeof(struct node));
    printf("\nenter data and -1 for no node");
    scanf("%d",&x);
    if(x==-1)
    {
        return 0;
        
    }
    newnode->data=x;
    newnode->left=create();
    printf("enter the left child %d\n",x);
    newnode->right=create();
    printf("enter the right child %d\n",x);
    return newnode;
}
void inorder(struct node *root)
{
    if(root == NULL)
    {
        return ;
    }
    inorder(root->left);
    printf("%d ",root->data);
    inorder(root->right);
}
void main()
{
    struct node *root;
    root=NULL;
    root=create();  //calling
    inorder(&root);
}