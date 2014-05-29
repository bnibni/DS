#include <iostream>
using namespace std;

typedef struct BiTNode
{
	int value;
	struct BiTNode *lchild;
	struct BiTNode *rchild;
}BiTNode;