#include "header.h"
void search(char a)
{
    FILE *fp;
    struct bsse stud;
    char rol[21];
    char ch;
    int i;
    
        fp=fopen("student_information.txt","r");
        if(a=='1')
            printf("\n\t\tEnter Name : ");
        else if(a=='2')
            printf("\n\t\tEnter Roll : ");
        
        fflush(stdin);
        scanf("%[^\n]",rol);
        while(!feof(fp)) {
            fgets(stud.name,20,fp);
            fgets(stud.address,80,fp);
            fgets(stud.roll_number,10,fp);
            fgets(stud.registation_number,8,fp);
            if(a=='1')
                i=roll_search(stud.name,rol,a);
            else if(a=='2')
                i=roll_search(stud.roll_number,rol,a);
            
            if(i==1) {
            	printchar('*',120);
                printf("\n\n\t\tName : %s\n",stud.name);
                printf("\n\t\tAddress : %s\n",stud.address);
                printf("\n\t\tRoll : %s\n",stud.roll_number);
                printf("\n\t\tRegistration No. :%s\n",stud.registation_number);
                if(a=='1'||a=='2') {
                	printchar('*',120);
                    res(stud.roll_number,1);
                }
                stud.name[0]='\0';
                stud.address[0]='\0';
                stud.roll_number[0]='\0';
                stud.registation_number[0]='\0';
                i=0;
            }
        }
        
   
    printf("\n\t\tDo You Want to Search Again? (Y/N)\n\t\t");
    fflush(stdin);
    ch=getchar();
    if(ch=='Y'||ch=='y') {
        search_menu();
    } else
        return;
}
