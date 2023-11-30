#include <stdio.h>
#include <stdlib.h>

struct Node 
{
    int data;
    struct Node *left, *right;
};

struct Node *newNode(int data) 
{
    struct Node *node = (struct Node *)malloc(sizeof(struct Node));
    node->data = data;
    node->left = node->right = NULL;
    return node;
}

void printInorder(struct Node *root) 
{
    if (root == NULL)
    {
        return;
    }
    printInorder(root->left);
    printf("%d ", root->data);
    printInorder(root->right);
}

struct Node *insert(struct Node *node, int data) 
{
    if (node == NULL)
    {
        return newNode(data);
    }
    if (data < node->data)
    {
        node->left = insert(node->left, data);
    }
    else if (data > node->data)
    {
        node->right = insert(node->right, data);
    }
    return node;
}

int main() 
{
    struct Node *root = NULL;
    root = insert(root, 1245);
    insert(root, 634);
    insert(root, 140);
    insert(root, 300);

    printf("\n--------------------------------------------------------------");
    printf("\n IN ORDER TRAVERSAL = ");
    printInorder(root);
    printf("\n--------------------------------------------------------------");

    return 0;
}