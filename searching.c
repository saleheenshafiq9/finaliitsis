#include "header.h"
int roll_search(char *cmpable,char *cmp,char d)
{
    int j=0;
    for( i=0; i<strlen(cmp); i++) {
        if(cmpable[i+j]!=cmp[i])
            return 0;
    }
    return 1;
}
