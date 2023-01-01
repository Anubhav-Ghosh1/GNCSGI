#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}Node;

Node *createNode(Node* root)
{
    root = (Node*)malloc(sizeof(Node));
    int val;

    printf("Enter data: \n");
    scanf("%d",&val);

    // works as an constructor
    root->data = val;
  oot->left = NULL;
    root->right = NULL;  r

    if (val == -1)
    {
        return NULL;
    }

    // Making left node
    printf("Enter data for left tree %d\n",val);
    root->left = createNode(root->left);
    
    // Making right node
    printf("Enter data for left tree %d\n",val);
    root->right = createNode(root->right);
    return root;;
}

void preOrder(Node *root)
{
    if(root == NULL)
    {
        return ;
    }
    printf("%d ",root->data);
    preOrder(root->left);
    preOrder(root->right);
}

void inorder(Node *root)
{
    if(root == NULL)
    {
        return ;
    }
    inorder(root->left);
    printf("%d ",root->data);
    inorder(root->right);
}

void postOrder(Node *root)
{
    if(root == NULL)
    {
        return ;
    }
    postOrder(root->left);
    postOrder(root->right);
    printf("%d ",root->data);
}

int heightOfTree(Node *root)
{
    if(root == NULL)
    {
        return 0;
    }
    int left = heightOfTree(root->left);
    int right = heightOfTree(root->right);
    if(left > right)
    {
        return (left+1);
    }
    else
    {
        return (right + 1);
    }
}
int isBalanced(Node *root)
    {
        // Basecase
        if(root == NULL)
        {
            return 1;
        }
        int left = isBalanced(root->left);
        int right = isBalanced(root->right);
        int absHeight = abs(heightOfTree(root->left) - heightOfTree(root->right)) <= 1;
        if(left && right && absHeight)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

int main()
{
    Node* root = NULL;
    root = createNode(root);
    printf("Inorder traversal: ");
    inorder(root);
    printf("\n");
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    // 7 3 11 1 17 5
    printf("Preorder traversal: ");
    preOrder(root);
    printf("\n");

    printf("Postorder traversal: ");
    postOrder(root);
    printf("\n");
    
    printf("Height of tree %d\n",heightOfTree(root));
    
    printf("If tree balance?\n");
    if(isBalanced(root))
    {
        printf("Tree is balance\n");
    }
    else
    {
        printf("Tree is not balanced\n");
    }

    return 0;
}