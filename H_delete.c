# include "head.h"
ibanga head_deletion(ibanga *head)
{
		ibanga *begining;
		begining = head;

		if (begining->linker != NULL)
		{
				head = begining->linker;
		printf("\n|--------------------------------------------------------------------------|\n");
		printf("Bro wangu the list the list again the specified node will not appear.");
		printf("\n|--------------------------------------------------------------------------|");
		}
		else
		{
				printf("\n|--------------------------------------------------------------------------|");
				printf("\nEhhh pay attention Jama !!.The list can't be empty");
				printf("\n|--------------------------------------------------------------------------|");
		}
		return (*head);
		free(begining);		
}
