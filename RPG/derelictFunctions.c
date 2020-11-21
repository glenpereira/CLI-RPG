#include "header.h"

/*FUNCTIONS I WROTE BECAUSE I DONT KNOW ANY PRE-DEFINED FUNCTIONS AND THESE COULD PROBABLY BE DONE IN BETTER WAYS*/


char firstName(char a[30],char b[30]) //for extracting first name from full name entered first
{
    int i;

    for(i=0;i<=strlen(a);i++)
    {
        if(a[i]!=' ')
        {
            b[i]=a[i];
        }
        else { b[i]='\0'; break;}
    }
}


char bettergets(char a[30]) //A better gets function that flushes input buffer
{
    if(btrgts!=0)
        gets(a);
    else{
    char b;
    b=getchar();
    gets(a);
    }
    btrgts++;


}

