#ifndef _tree.h_
#define _tree.h_
struct tnode {
 int element;
 struct tnode* left;
 struct tnode* right;
};

typedef struct tnode tn;
#endif
