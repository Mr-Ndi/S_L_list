# include "head.h"
ibanga *starting(ibanga **head)
{
		ibanga *agahezo;

		agahezo = malloc(sizeof(ibanga));
		if (agahezo == NULL)
				exit(EXIT_FAILURE);

		printf("\n\t\t\t Helloooo we are going to insert node at the begginig. Ready ??");
		printf("\n|-----------------------------------------------------------------------------------------------------------------------|");
		printf("\n\tSo  the name is ?\t:");
		scanf("%s", &agahezo->name);
		printf("\n\tAnd the age is ?\t:");
		scanf("%d", &agahezo->age);
		printf("\n|-------------------------------------------------------------------------|");
		agahezo->linker = *head;
		*head = agahezo;

		return(*head);
}
