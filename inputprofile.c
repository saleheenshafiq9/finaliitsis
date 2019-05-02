#include "header.h"
void input_profile()
{
	printhead();
    struct bsse student;
    int n;
    
    FILE *fp;
    fp=fopen("student_information.txt","a+");
    while(1) {
        fflush(stdin);
        
            printf("\n\n\t\tEnter Name : ");
            fflush(stdin);
            fgets(student.name,80,stdin);
            fprintf(fp,"%s",student.name);
            printf("\n\t\tEnter Address : ");
            fgets(student.address,80,stdin);
            fprintf(fp,"%s",student.address);
            printf("\n\t\tEnter Roll : ");
            fgets(student.roll_number,10,stdin);
            fprintf(fp,"%s",student.roll_number);
            printf("\n\t\tEnter Registration No. : ");
            scanf("%s",student.registation_number);
            fprintf(fp,"%s\n",student.registation_number);
        
        printf("\n\t\tPress '1' to Add Another Profile\n\t");
        printf("\n\t\tPress '0' to Go Back to Main Menu\n\t");
        scanf("%d",&n);
        if(!n)break;
        
        printchar('*',120);
    }
    fclose(fp);
    return;
}
