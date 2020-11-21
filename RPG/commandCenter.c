
#include "header.h"

//COMMON COMMAND CENTRE
void commgen()
{
    int i;
    char command[20];
    i=0;
    while(i==0){
    printf("COM:\t \t");
        bettergets(command);
        if(strcasecmp(command,"switch")==0){changeto(); i++;break;}
        if(strcasecmp(command,"ft")==0){mapft(); i++; break; }

        if(i==0){printf("\nCommand not found \n"); continue;}
        }

}
