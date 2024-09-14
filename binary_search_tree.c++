#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

node *createNode(int value)
{
    node *newNode = new node;
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

node *insert(node *root, int data)
{
    if (root == NULL)
        return createNode(data);

    if (data < root->data)
        root->left = insert(root->left, data);
    else if (data > root->data)
        root->right = insert(root->right, data);

    return root;
}

void inorder(node *root)
{
    if (root == NULL)
        return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main()
{
    node *root = NULL;
    int n;
    cout << "How many values do you want to enter" << endl;
    cin >> n;
    int no;
    for (int i = 0; i < n; i++)
    {
        cin >> no;
        root = insert(root, no); // Assign the result back to root
    }

    inorder(root);
}
