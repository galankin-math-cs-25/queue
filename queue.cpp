#include "stdafx.h"
#include <iostream>
#include "queue.h"
using namespace std;

void add(int val, Node **last)
{
	Node *p = new Node;
	p->val = val; //(*p).val = val;
	p->next = *last;
	*last = p;
}



void add_first(int val, Node **first, Node **last)
{
	Node *p = new Node;
	p->val = val; //(*p).val = val;
	p->next = NULL;
	*first = *last = p;
}


int del(Node **first)
{
	int tval = (*first)->val; //(**first).val
	Node *tNode = *first;
	*first = (*first)->next;
	delete tNode;
	return tval;
}


void print(Node **first)
{
	while (*first)
	{
		cout << del(first);
	}
}
bool isEmpty(Node *first)
{
    if(!first)
    {
        return true;
    }

    else
    {
        return false;
    }
}
