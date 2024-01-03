# include "head.h"
ibanga tail_deletion(ibanga *head)
{
		ibanga *new, *new1;

		new = malloc(sizeof(ibanga));
		if (new == NULL)
				exit(EXIT_FAILURE);
		
		new1 = malloc(sizeof(ibanga));
		if (new1 == NULL)
				exit(EXIT_FAILURE);

		printf("\n\t\tHello we have removed the node at the tail of the list.");
		printf("\n|------------------------------------------------------------------------------------------------------|");
		
		new1 = head;
		
		while(new1->linker)
		{
				new = new1;
				new1 = new1->linker;
		}

		if(new->linker == NULL)
		{
				printf("\nJama Keep in mind ko list can't be empty");
				printf("\n|--------------------------------------------------------------------------|");
		}

		else
		{
				new->linker = NULL;
				printf("\nBro wangu the display the list again the specified node will not appear.");
				printf("\n|--------------------------------------------------------------------------|");
		}
		return (*head);
		free(new1);
}
