#include<bits/stdc++.h>
using namespace std;

struct Node
{

    int data;
    Node *left,*right;

};

Node* createTree() {
    int x;
    cout << "Enter data (-1 for no node): ";
    cin >> x;

    if (x == -1)
        return NULL;

    Node* newNode = new Node;
    newNode->data = x;

    cout << "Enter left child of " << x << endl;
    newNode->left = createTree();

    cout << "Enter right child of " << x << endl;
    newNode->right = createTree();

    return newNode;
}

void inorder(Node *root)
{
    if(root==nullptr)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data;
    inorder(root->right);

}

int main()
{
      Node* root = NULL;

    cout << "Create Binary Tree\n";
    root = createTree();

    cout << "\nInorder Traversal: ";
    inorder(root);


    return 0;
}
