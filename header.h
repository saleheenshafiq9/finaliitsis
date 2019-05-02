#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct bsse {
    char name[21];
    char address[81];
	char roll_number[10];
    char registation_number[7];
};

char sub[8][6][6];
int res_input[6];
int semi;
float gp[6];

void input_marks();
void calculate_gpa(int,int);
void student_profile();
void input_profile();
void menu();
void subject_nam1();
void subject_nam2();
void subject_nam3();
void subject_nam4();
void subject_nam5();
void subject_nam6();
void subject_nam7();
void subject_nam8();
void search_menu();
void printhead();
void printchar(char,int);

int roll_search(char*,char*,char);
void sarch(char);
void input();
void res(char*,int);
void update_cgpa(char*,double,int);
void print_cgpa(char*,char,float);
void print_gpa(char*,char,float);
void print_result(char*,char,char,int,float);
int k,i,j;
