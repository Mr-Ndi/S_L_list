# include "head.h"
int number(ibanga *head)
{
		ibanga *begining;
		int num = 0;

		begining = head;
		if (begining == NULL)
				num = 0;
		while (begining != NULL)
		{
				num += 1;
				begining = begining -> linker;
		}
		printf("\n|--------------------------------------------------------------------------|");
		printf("\nBro wangu the list is composed by %d nodes", num);
		printf("\n|--------------------------------------------------------------------------|");
		
		return (0);
}
