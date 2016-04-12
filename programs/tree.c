#include "tree.h"
struct node {
int element;
struct node* left;
struct node* right;
};

typedef struct node* pnode;

pnode createTree(int element){
 pnode root = (pnode)malloc(sizeof(pnode));
 pnode->element=element;
 pnode->left=0;
 pnode->right=0;
 return pnode;
}

void insertnode()
