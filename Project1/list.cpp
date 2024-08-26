#include "list.h"
node* buynode(elem x)
{
	node* pphead = (node*)malloc(sizeof(node));
	if (pphead == NULL)
	{
		cout << "Memory allocation failed!" << endl;
		exit(1);
	}
	pphead->data = x;
	pphead->next = NULL;
	return pphead;
}
	
auto nodeinit(node** pphead) -> void

{
	*pphead = buynode(3);
}



void pushback(node* phead, elem data)
{
	node* p = buynode(data);
	assert(phead);

	if (phead->next == nullptr) {
		p->prev = phead;
		phead->next = p;
	}
	else {
		p->prev = phead;
		p->next = phead->next;
		phead->next->prev = p;
		phead->next = p;
	}
}
	
void pushfront(node* phead, elem data)
{
	node* newnode = buynode(data);
	assert(newnode);

	newnode->next=phead->next;
	newnode->prev=phead;

	phead->next->prev=newnode;
	phead->next=newnode;
}

void popback(node* phead)
{

	if (phead == nullptr || phead->next == nullptr) {
		// ����Ϊ�ջ�ֻ��һ���ڵ�
		return;
	}

	node* del = phead;

	while (del->next != nullptr) {
		del = del->next;
	}

	// ɾ�����һ���ڵ�
	del->prev->next = nullptr;  // ��ǰ���ڵ����һ��ָ������Ϊnullptr

	free(del);

	
		/*phead->prev->prev->next = phead;
	
		node* del = phead->prev;
		
		phead->prev = phead->prev->prev;

		free(del);
		del = nullptr;*/
	
}