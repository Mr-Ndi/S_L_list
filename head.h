#ifndef HEAD
#define HEAD

# include <stdio.h>
# include <stdlib.h>

typedef struct student
{
		int age;
		char name[20];
		struct student *linker;
} ibanga;

ibanga insert_2nodes();
void display(ibanga *head);
void error();
int ikaze();
int number(ibanga *head);
ibanga *starting(ibanga **head);
ibanga tail(ibanga *head);
ibanga head_deletion(ibanga *head);
ibanga tail_deletion(ibanga *head);
ibanga delete(ibanga *head);

#endif
