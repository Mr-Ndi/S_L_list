# include "head.h"
ibanga tail(ibanga *head)
{
		ibanga *new, *new1;

		new = malloc(sizeof(ibanga));
		if (new == NULL)
				exit(EXIT_FAILURE);

		printf("\n\t\t\t\t Hello we are going to insert node at the tail of the list. Are you Ready ??");
		printf("\n|------------------------------------------------------------------------------------------------------|");
		printf("\n\tSo  the name is ?\t:");
		scanf("%s", &new->name);
		printf("\n\tAnd the age is ?\t:");
		scanf("%d", &new->age);
		printf("\n|-------------------------------------------------------------------------|");
		new->linker = NULL;

		new1 = head;
		while(new1->linker != NULL)
		{
				new1 = new1->linker;
		}
		new1->linker = new;
		return (*head);
}
