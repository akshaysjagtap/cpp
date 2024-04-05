#include<bits/stdc++.h>

using namespace std;

class LinkedList
{
	int val;
	LinkedList *next {nullptr};
	
	public:
		void display();
		static LinkedList *getNode(int data);
		LinkedList *insert(LinkedList *temp);
};

LinkedList* LinkedList :: getNode(int data)
{
	LinkedList *ptr = new LinkedList();
	ptr->val = data;
	ptr->next = nullptr;
	return ptr;
}

LinkedList* LinkedList :: insert(LinkedList *node)
{
	this->next = node;
	return this->next;
}

void LinkedList :: display()
{
	LinkedList *temp = this;
	while(temp != nullptr)
	{
		cout << temp->val << endl;
		temp = temp->next;
	}
}

int main()
{
	LinkedList *start = nullptr, *temp = nullptr, *node = nullptr;
	for(int i=0;i<5;i++)
	{
		int data;
		cout << "Enter value: " ;
		cin >> data;
		
		if(start == nullptr)
			temp = start = LinkedList::getNode(data);
		else
		{
			node = LinkedList::getNode(data);
			temp = temp->insert(node);
		}
	}
	temp = start;
	temp->display();
	return 0;
}
