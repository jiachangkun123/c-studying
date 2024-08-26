#include "list.h"



 void test_list()
{
	node* head = NULL;
	nodeinit(&head);
	pushback(head, 1);
	pushback(head, 2);
	pushback(head, 5);
	pushback(head, 6);
	
	while(head!=nullptr)
	{
		cout << head->data << endl;
		head = head->next;
	}
	//popback(head);
	//while (head ->next!= nullptr)
	//{
	//	cout << head->data << endl;
	//	head = head->next;
	//}
	////popfront(head);
	//while (head ->next!= nullptr)
	//{
	//	cout << head->data << endl;
	//	head = head->next;
	//}

}



int main()
{
	test_list();
	
	return 0;
}
