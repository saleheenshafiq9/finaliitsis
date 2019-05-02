#include "header.h"

void password()
{
	printhead();
	int x;
	printf("\n\n\t\tPlease Type Password : ");
    scanf("%d",x);
    if(x==786445)
    {
    	input_profile();
	}
	else 
	menu();
}
