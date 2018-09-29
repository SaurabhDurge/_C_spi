#include<stdio.h>
#include<stdlib.h>

struct list {int data;
			struct list *node;
			};

struct list ll;
void traverse(struct list node);
struct list *add_node (int data);

int main(void)
{
	int choice;
	ll.data = 0;
	ll.node = NULL;
	while (1)
	{
		int data;
		printf ("___Menu___\n1. Add node\n2.View List\n");
		scanf("%d",&choice);
		switch (choice)
		{
			case 0: return 0;
			case 1: printf("Enter data:: ");
					scanf("%d",&data);
					ll.node = add_node(data);
					//printf("%d",*ll.node);
					break;
			case 2: printf("The List:: ");
				    traverse(ll);
					printf("\n");
					break;
		   default: break;

		}
		//printf(".")
	}
	
	return 0;
}


void traverse(struct list lt)
{
	do
	{
		printf("%d ",lt.data);
		//lt.node= lt.node;
	}while(lt.node != NULL);
}

struct list *add_node (int data)
{
	static struct list la;
	la.data= data;
	la.node= NULL;
	return &la;
}