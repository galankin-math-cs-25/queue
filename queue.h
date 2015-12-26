struct node
{
	int val;
	node *next;
}; 



struct queue
{
	node *first;
	node *last;
}; 



void first_add(int val, node **first, node **last);
void add(int val, node **first);
int pop(node **first);
void printDel(node *first);
bool full(queue *a);
void print();
