#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#ifndef _BST_ADT_H
#define _BST_ADT_H
#define SWAP(x,y)


typedef struct TreeNode TreeNode;

struct TreeNode
{
	TreeNode* left;
	TreeNode* right;
	int element;
};

typedef struct BST
{
	TreeNode* root;
}BST;
#endif // !_BST_ADT_H

void initBST(BST* bst);
void insertBST(BST* bst, int value);
void printTreeInorder(BST* bst);
void destroyBST(BST* bst);
int findIndexNFromLast(BST* bst, int N);
int sameHeightLeaves(BST* bst);

void main(initBST)
{
    {
        int data;
        struct node* left;
        struct node* right;
    }
    {
        typedef struct node node;
        temp->left = NULL;
        temp->right = NULL;
    }
}
void(insertBST)

{
    int value;
    int bst;
    {
        if (bst == NULL)
            set(t, value);
        else if (value < (bst)->num)
            insertBST(&(bst)->left, value);
        else
            insertBST(&(bst)->right, value);
    }
}
int main(int argc, char* argv[])
{
    int a = 5;
    int b = 8;

    printf("a = %d, b = %d\n", a, b);
    if (1)
        SWAP(a, b);
    else
        printf("in else");
    printf("a = %d, b = %d\n", a, b);
}

void printTreeInorder(BST* bst)
{
    {
        Node root = newNode(5);
        root.left = newNode(2);
        root.right = newNode(8);
        root.left.left = newNode(1);
        root.left.right = newNode(4);
        root.right.right = newNode(9);
      
        printLeafNodes(root);
    }
}

void main(findIndexNFromLast)

    public static void Main(String[]args)
    {
        ArrayList totalTreesFrom1toN = constructTrees(1, 3);

        /* Printing preorder traversal
        of all constructed BSTs */
        Console.WriteLine("Preorder traversals of all" +
            "constructed BSTs are ");
        for (int i = 0; i < totalTreesFrom1toN.Count; i++)
        {
            preorder((Node)totalTreesFrom1toN[i]);
            Console.WriteLine();
        }
    }
int  main(sameHeightLeaves)
int main()
{

    struct Node* root = newNode(5);

    root->left = newNode(2);
    root->left->left = newNode(1);
    root->left->left->right = newNode(2);
    root->left->right = newNode(4);
    root->left->left->left = newNode(1);
    root->right = newNode(8);
    root->right->left = newNode(8);
    root->right -> right = newNode(9);
    root->right -> left = newNode(8);
    root->right->left->left = newNode(8);
    root->right->lright->left = newNode(9);

    if (check(root))

        printf("Leaves are at same level\n");

    else

        printf("Leaves are not at same level\n");

    getchar();

    return 0;
}

