#include "header.h"
void menu()
{
    printhead();
    while(1) {
        printf("\t\t\t1. Input Profile\n");
        printf("\t\t\t2. Input Result\n");
        printf("\t\t\t3. Search\n");
        printf("\t\t\t4. Quit\n\n");
        printchar('*',120);
        printf("\t\t\tChoose What You Want to Do : ");
        char a;
        fflush(stdin);
        a=getchar();
        if(a=='1')
            input_profile();
        else if(a=='2')
            input();
        else if(a=='3')
            search_menu();
        else if(a=='4')
		{
		printf("\n\t\tDo You Really Want to Quit? (Y/N)");
		printf("\n\t\t");
		fflush(stdin);
		a=getchar();
		if(a=='Y'||a=='y')
			return;}
    }
}
