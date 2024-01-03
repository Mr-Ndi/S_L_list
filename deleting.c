# include "head.h"
ibanga delete(ibanga *head)
{
		ibanga *begining, *spy;
		char izina[20];
		int imyaka;

		begining = head;

		printf("\n\n\t\tHello we are going to Remove a node in this list. Ready ?");
		printf("\n|--------------------------------------------------------------------------------|\n");

		printf("\nSo what is the name of the student whom u wish to remove ?. \t:");
		scanf("%s", &izina);
		printf("\nLastly what is the age of the student whom u wish to remove ?. \t:");
		scanf("%d", &imyaka);

		while (begining->linker)
		{
				if (begining->name == izina && begining->age == imyaka)
				{
						break;
				}
				else
				{
						spy = begining;
						begining = begining->linker;
				}
		}
		if(spy->linker == NULL)
		{
				printf("\n|--------------------------------------------------------------------------|");
				printf("\nThe list can't be empty. that is why we will not delete that node");
				printf("\n|--------------------------------------------------------------------------|");
		}
		else
		{
				spy->linker = NULL;
				printf("\n|--------------------------------------------------------------------------|");
				printf("\nBro wangu the list the list again the specified node will not appear.");
				printf("\n|--------------------------------------------------------------------------|");
		}

		return (*head);
		free(begining);		
}
