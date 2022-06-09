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
struct node
{
    int data;
    struct node* left;
    struct node* right;
}
typedef struct node node;
temp->left = NULL;
temp->right = NULL;

void insertBST(BST* bst, int value);
{
if (newNode->data <= bst->data) //left subtree (<=)
        if (bst->left == NULL)
            bst->left = value;
        else
            insert(bst->left, value);
    if (value->data > bst->data) //right subtree (>)
        if (bst->right == NULL)
            bst->right = value;
        else
            insert(bst->right, value);

    do {
        int temp = (x);
        (x) = (y);
        (y) = temp;
    } while (0)
}



void printTreeInorder(BST* bst);

{
if (node == NULL) return;
travel(node->left);
do_something(node);
travel(node->right);
}
if (bst != NULL)
{
    inorder(bst->left);
    printf(“ % d”, bst->data);
    inorder(bst->right);
}
return NULL; //Not Found! Or Tree is empty


void destroyBST(BST* bst);
struct node
{
    int data;
    struct node* left;
    struct node* right;
}
return NULL; //Not Found! Or Tree is empty
free(node);


int findIndexNFromLast(BST* bst, int N);
{
    if (root != NULL)
    {
     inorder(root->left);
     printf(“ % d”, root->data);
     inorder(root->right);
    }
    int choice;
    char ans = 'N';
    int key;
    node* newNode, * root, * tmp;
    root = NULL;
}


int sameHeightLeaves(BST* bst);

struct Node
{
int data;
struct Node* left, * right;
};
struct Node* newNode(int data)
{
 struct Node* node = (struct Node*)malloc(sizeof(struct Node));
 node->data = data;
 node->left = node->right = NULL;
return node;
}

/* Recursive function which checks whether all leaves are at same level */

bool checkUtil(struct Node* root, int level, int* leafLevel)
{
if (root == NULL)  return 1;
 if (root->left == NULL && root->right == NULL)
{
// When a leaf node is found first time
     if (*leafLevel == 0)
     {
         *leafLevel = level; // Set first found leaf's level
         return 1;

     else
     {
         return 0;
     }
     }