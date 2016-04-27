#include "tree.h"
/*
struct node{
 void element;
 struct node* left;
 struct node* right;
};
*/

// typedef struct node* pnode;

pnode createTree(void element){
 pnode head = (pnode) malloc(sizeof(pnode));
 head->element = element;
 head->left=0;
 head->right=0;
 return head;
}

void addElement(pnode target,void element){
  
}
