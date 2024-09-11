// Separate odd nodes followed by even nodes

#include<stdio.h>
#include<malloc.h>

struct node
{
	int data;
	struct node *next;
};

struct node *start = NULL, *gptr = NULL;

struct node *getNode(int d)
{
	struct node *nd = NULL;
	nd = (struct node *)malloc(sizeof(struct node));
	nd->data = d;
	nd->next = NULL;
	return nd;
}

void link(int d)
{
	struct node *lptr = NULL;
	if(start == NULL)
		gptr = start = getNode(d);
	else
	{
		lptr = getNode(d);
		gptr->next = lptr;
		gptr = lptr;
	}	
}

void display()
{
	struct node *temp = start;
	while(temp != NULL)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
	printf("\n");
}

void joe()
{
	struct node *temp = start, *odd = NULL, *ot = NULL, *even = NULL, *et = NULL;
	int oe = 1;
	while(temp != NULL)
	{
		if(odd == NULL)
			ot = odd = temp;
		else if(even == NULL)
			et = even = temp;
		else
		{
			if(oe % 2 == 1)
			{
				struct node *g = et->next;
				ot->next = g;
				ot = g;
			}
			else
			{
				struct node *t = ot->next;
				et->next = t;
				et = t;
			}
		}
		temp = temp->next;
		oe++;
	}
	ot->next = even;
	if(et != NULL)
	et->next = NULL;
	temp = odd;
	while(temp != NULL)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
	printf("\n");
}

int main()
{
	int ch, data;
	while(1)
	{
		printf("\n##########\n1. Add\n2. Display\n3. Exit\n##########\n");
		printf("Enter choice: ");
		scanf("%d", &ch);
				
		if(ch == 1)
		{
			printf("Enter data: ");
			scanf("%d", &data);
			
			link(data);
		}
		else if(ch == 2)
		{
			display();
		}
		else if(ch == 3)
		{
			joe();
			break;	
		}
		else 
			printf("Wrong choice\n");
	}
	return 0;	
}
