#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *right;
    Node *left;
};

Node *createNode(int data)
{
    Node *temp = new Node();
    temp->data = data;
    temp->right = temp->left = NULL;
    return temp;
}

void insertNode(Node *&root, int data)
{
    if (root == NULL)
        root = createNode(data);
    else if (root->data > data)
        insertNode(root->left, data);
    else
        insertNode(root->right, data);
}

void printInorder(Node *root)
{
    if (root != NULL)
    {
        printInorder(root->left);
        cout << root->data << " ";
        printInorder(root->right);
    }
}

void printPreorder(Node *root)
{
    if (root != NULL)
    {
        cout << root->data << " ";
        printPreorder(root->left);
        printPreorder(root->right);
    }
}

void printPostorder(Node *root)
{
    if (root != NULL)
    {
        printPostorder(root->left);
        printPostorder(root->right);
        cout << root->data << " ";
    }
}

int main()
{
    Node *root = NULL;
    int n, val;
    int treeOp;

    do
    {

        cout << "\nBINARY TREE OPTIONS";
        cout << "\n------------------------------\n";
        cout << "(1) Insert element(s)";
        cout << "\n(2) Inorder traversal";
        cout << "\n(3) Preorder traversal";
        cout << "\n(4) Postorder traversal";
        cout << "\n(5) Return to main menu\n\n";
        cout << "Enter the number of your choice: ";
        cin >> treeOp;
        cout << endl;

        switch (treeOp)
        {
        case 1:
            cout << "How many elements will you insert: ";
            cin >> n;
            cout << "\nInsert " << n << " elements, hit enter after each:\n";
            for (int i = 0; i < n; i++)
            {
                cin >> val, insertNode(root, val);
            }
            cout << "\nElement(s) inserted!" << endl;
            break;
        case 2:
            if (root == NULL)
            {
                cout << "\nNo elements found!\n";
            }
            else
            {
                cout << "INORDER TRAVERSAL OF YOUR BINARY TREE: " << endl;
                printInorder(root);
                cout << endl;
            }
            break;
        case 3:
            if (root == NULL)
            {
                cout << "\nNo elements found!\n";
            }
            else
            {
                cout << "PREORDER TRAVERSAL OF YOUR BINARY TREE: " << endl;
                printPreorder(root);
                cout << endl;
            }
            break;
        case 4:
            if (root == NULL)
            {
                cout << "\nNo elements found!\n";
            }
            else
            {
                cout << "POSTORDER TRAVERSAL OF YOUR BINARY TREE: " << endl;
                printPostorder(root);
                cout << endl;
            }
            break;
        default:
            if (treeOp != 5)
            {
                cout << "\nInput invalid, please try again\n";
            }
        }

    } while (treeOp != 5);

    return 0;
}