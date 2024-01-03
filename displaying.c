# include "head.h"
 void display(ibanga *head)
{
		if (head == NULL)
				exit(EXIT_FAILURE);
		while(head != NULL)
		{
				printf("\n|-----------------------------------------------------------------------|\n");
				printf("The name is\t:%s", head->name);
				printf("\nAnd the age is\t:%d", head->age);
				printf("\n|-----------------------------------------------------------------------|");

				head = head->linker;
		}
}
