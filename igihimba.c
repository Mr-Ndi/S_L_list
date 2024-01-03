# include "head.h"
int main (){
		ibanga *head, *umutwe;
		int choice;
		
		head = malloc(sizeof(ibanga));
		if(head == NULL)
				exit (EXIT_FAILURE);
		
		*head = insert_2nodes(head);
		printf("\n|----------------------------------------------------------------------------------------|\n\n");
		
		while (1)
		{
				choice = ikaze();
				if (choice == 200)
						break;
				switch(choice)
				{
						case 1:
								display(head);
								break;
						case 2:
								number(head);
								break;
						case 3:
								*head = *starting(&head);
								break;
						case 4:
								*head = tail(head);
								break;
						case 5:
								*head = head_deletion(head);
								break;
						case 6:
								*head = tail_deletion(head);
								break;
						case 7:
								*head = delete(head);
								break;
						default:
								error();
								break;
				}
		}
		free(head);
		return 0;
}
