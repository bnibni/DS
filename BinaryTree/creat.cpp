#include "binarytree.h"
void CreateBiTree(BiTNode *&T)
{
	int a;
	cin >> a;
	if (a == 0)
		T = NULL;
	else
	{
		T = new BiTNode;
		T->value = a;
		CreateBiTree(T->lchild);
		CreateBiTree(T->rchild);
	}
}

void PreOrder(BiTNode *T)
{
	if(T != NULL)
	{
		cout << T->value << " ";
		PreOrder(T->lchild);
		PreOrder(T->rchild);
	}

}

void InOrder(BiTNode *T)
{
	if(T != NULL)
	{	
		InOrder(T->lchild);
		cout << T->value << " ";
		InOrder(T->rchild);
	}
}



void PostOrder(BiTNode *T)
{
	if(T != NULL)
	{
		PostOrder(T->lchild);
		PostOrder(T->rchild);
		cout << T->value << " ";
	}
}



int main()
{
	BiTNode *T;
	CreateBiTree(T);
	InOrder(T);
	return 0;
}