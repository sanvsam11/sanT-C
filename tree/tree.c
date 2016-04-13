#include "tree.h"
struct node{
 void element;
 struct node* left;
 struct node* right;
};

typedef struct node* pnode;

pnode createTree(void element){
 pnode = (pnode) malloc(sizeof(pnode));
 pnode->element = element;
 pnode->left=0;
 pnode->right=0;
 return pnode;
}

void addElement(pnode target,void element){
 
}
