#include "header.h"
void search_menu()
{    char temp;
	printhead();
    
    printf("\n\t\t1. By Name\n\n\t\t2. By Roll\n\t\t");
    int i=0;
    fflush(stdin);
    scanf("%c",&temp);
    
    search(temp);
    return;
}
