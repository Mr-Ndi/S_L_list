# include "head.h"

ibanga *head, * newnode;
ibanga insert_2nodes(){
		
		printf("\n------------------------------------------------------------------------------------|\n Hello here is Mr Ndi's list. first of all enter basic 2 nodes\n");
		printf("|-------------------------------------------------------------------------------------|\n\n");
				
		head = malloc(sizeof(ibanga));
		if (head == NULL)
			exit (EXIT_FAILURE);	
		else{
// Node 1.
				
				printf("|----------------------------------------------|");
				printf("\n Hello what is the name ?\t:");
				scanf("%s", &head->name);

				printf("\n Good afite imyaka ingahe x ?\t:");
				scanf("%d", &head->age);

				head->linker = NULL;
		}

// Node 2.
				newnode = malloc(sizeof(ibanga));
				if (newnode == NULL)
					exit (EXIT_FAILURE);	
				else{

					printf("|----------------------------------------------|");
					printf("\n Hello what is the name ?\t:");
					scanf("%s", &newnode->name);
					
					printf("\n Good afite imyaka ingahe x ?\t:");
					scanf("%d", &newnode->age);

					newnode->linker = NULL;
					head->linker = newnode;
				}
		return (*head);
		free(newnode);
}
