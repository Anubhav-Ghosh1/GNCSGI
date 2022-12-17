#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

int minimumInBST(Node* root)
{
    if(root == NULL)
    {
        return -1;
    }
    Node* temp = root;
    while(temp->left != NULL)
    {
       temp = temp->left; 
    }

    return temp->data;
}

int maximumInBST(Node* root)
{
    if(root == NULL)
    {
        return -1;
    }
    Node* temp = root;
    while(temp->right != NULL)
    {
       temp = temp->right; 
    }

    return temp->data;

}

void levelTraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    // Root node
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left != NULL)
            {
                q.push(temp->left);
            }
            if (temp->right != NULL)
            {
                q.push(temp->right);
            }
        }
    }
}

Node* minValue(Node* root)
{
    if(root == NULL)
    {
        return NULL;
    }
    Node* temp = root;
    while(temp->left != NULL)
    {
       temp = temp->left; 
    }

    return temp;
}

Node* deletionInBST(Node* root, int data)
{
    if(root == NULL)
    {
        return root;
    }
    if(root->data == data)
    {
        // 0 child
        if(root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }

        // 1 child
        if(root->left == NULL && root->right != NULL)
        {
            Node* temp = root->right;
            delete root;
            return temp;
        }

        if(root-> right == NULL && root->left != NULL)
        {
            Node* temp = root->left;
            delete root;
            return temp;
        }


        // 2 child
        if(root-> left != NULL && root->right != NULL)
        {
            Node* miniNode = minValue(root->right);
            int mini = miniNode->data;
            root->data = mini;
            root->right = deletionInBST(root->right,mini);
            return root;
        }
        
    }
    else if(root->data > data)
        {
           root->left = deletionInBST(root->left,data);
        }
        else
        {
           root->right =  deletionInBST(root->right,data);
        }
}

Node *insertIntoBST(Node *root, int data)
{
    // O(log n)
    // base case
    if (root == NULL)
    {
        root = new Node(data);
        return root;
    }

    if (data > root->data)
    {
        root->right = insertIntoBST(root->right, data);
    }
    else
    {
        root->left = insertIntoBST(root->left,data);
    }
    return root;
}

void inOrder(Node* root)
{
    if(root == NULL)
    {
        return;
    }

    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

void preOrder(Node* root)
{
    if(root == NULL)
    {
        return ;
    }

    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

void postOrder(Node* root)
{
    if(root == NULL)
    {
        return ;
    }

    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " " ;
}

void takeInput(Node *&root)
{
    int data;
    cin >> data;

    while (data != -1)
    {
        root = insertIntoBST(root, data);
        cin >> data;
    }
}

int main()
{
    /**
     * Algo
     *      root -> data
     *      /         \
     *      >         <
     *  right part   Left part
     */

    Node *root = NULL;

    cout << "Enter data to create BST" << endl;
    takeInput(root);

    cout << "Printing the BST" << endl;
    levelTraversal(root);

    cout << endl << "Printing Inorder" << endl;
    inOrder(root);

 // 10 8 21 7 27 5 4 2 -1

    cout << "Printing Preorder" << endl;
    preOrder(root);

    cout << endl << "Printing Postorder" << endl;
    postOrder(root);
    root = deletionInBST(root,21);

    cout << "Printing the BST" << endl;
    levelTraversal(root);

    cout << endl << "Printing Inorder" << endl;
    inOrder(root);

    return 0;
}