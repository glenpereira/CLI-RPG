/*CHOICE CHOOSER*/
#include "header.h"

int choose(int *a, int maximumchoice)
{
    int i=0;
    while(i==0){
    printf("\n\n YOU:\t");
    scanf("%d",&*a);
    if(*a<=maximumchoice && *a>0)
       {
         printf("\n"); //I added this is to avoid clustering of text and increase readability in game
         i++;
         break;
       }
    else
    {
        printf("\nInvalid Choice, Choose again.\n");
        continue;
    }



}
    return *a;
}


