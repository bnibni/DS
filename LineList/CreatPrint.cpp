#include "linklist.h"
#include <iostream>
using namespace std;

node *creat()//产生一个链表
{
	node* head, *rear, *p;
	int x;
	head = new node;
	rear = head;
	cout << "input the list end with -1" << endl;
	cin >> x;
	while(x + 1)
	{
		p = new node;
		p->info = x;
		rear->next = p;
		rear = p;
		cin >> x;
	}
	rear->next = NULL;
	return head;
}

void print(node *head)//打印链表
{
	node *p;
	p = head->next;
	cout << "the linelist you put is" << endl;
	while(p)
	{
		cout << p->info << " " <<endl;
		p = p->next;
	}
}

void delete_list(node *head, int x)
{
	node *p, *pre;
	p = head->next;
	pre = head;
	while(p && p->info != x)
	{
		pre = p;
		p = p->next;
	}
	if(!p)
		cout << "no data" << endl;
	else
		pre->next = p->next;
	delete p;
}

void add_list(node *head, int position, int value)
{
	int index = 1;
	node *p, *pre, *add;
	p = head->next; pre = head;
	while(index != 3)
	{
		pre = p;
		p = p->next;
		index++;
	}
	add = new node;
	add->info = value;
	pre->next = add;
	add->next = p;
}








int main()
{
	node *head;
	head = creat();
	print(head);
	add_list(head, 3, 1);
	print(head);
}